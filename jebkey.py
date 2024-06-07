
import os, sys, struct, time, binascii, hashlib

licdata = '48000000B397A324C51F672480002E4057EA240ECE464A0ADDEDD0A43C8BA794041A0E22DC45057FCB4B146CAA6F37F1E7097023CCF1003DEE65232262870DE8AC55EEC5A0EAFD50DEE87C77BEBBCE1E'
RC4_Key2= b'Eg\xa2\x99_\x83\xf1\x10'

def rc4(Key, inData):
    Buf = b""
    S = list(range(256))
    K = (list(Key) * (256 // len(Key) + 1))[:256]  # Key should already be bytes, so no need for ord()
    j = 0
    for i in range(256):
        j = (S[i] + K[i] + j) % 256
        S[i], S[j] = S[j], S[i]
    i, j = 0, 0
    for x in range(len(inData)):
        i = (i + 1) % 256
        j = (j + S[i]) % 256
        S[i], S[j] = S[j], S[i]
        Buf += bytes([S[(S[j] + S[i]) % 256] ^ inData[x]])
    return Buf


def Long2Int(longdata):
    lo = longdata & 0xFFFFFFFF
    hi = (longdata >> 32) & 0x7FFFFFFF
    return hi, lo

def KeygenSN(LicenseSerial, MachineID):
    mhi, mlo = Long2Int(MachineID)
    lhi, llo = Long2Int(LicenseSerial)
    hi_Key = (mhi - lhi + 0x55667788) & 0x7FFFFFFF
    lo_Key = (mlo + llo + 0x11223344) & 0xFFFFFFFF
    Z0, = struct.unpack('<Q', struct.pack('<LL', lo_Key, hi_Key))
    Z1 = int(time.time()) ^ 0x56739ACD
    s = sum(map(lambda x: int(x, 16), "%x" % Z1)) % 10
    return "%dZ%d%d" % (Z0, Z1, s)

def ParsePost(buf):
    Info = struct.unpack('<3L2Q4LQ3L', buf[:0x40])
    flag, CRC, UserSerial, LicenseSerial, MachineID, build_type, \
          Ver_Major, Ver_Minor, Ver_Buildid, Ver_Timestamp, \
          TimeOffset, Kclass, Random2 = Info
    SysInfoData = buf[0x40:]
    assert CRC == binascii.crc32(buf[8:]) & 0xFFFFFFFF
    return Info, SysInfoData

def DecodeRc4Str(buf):
    buf = bytes.fromhex(buf)
    i, s = ParsePost(rc4(buf[:8] + RC4_Key2, buf[8:]))

    return i, s

def GetJebLicenseKey():
    if licdata:
        i, MachineID = DecodeRc4Str(licdata)
        SN = KeygenSN(i[3], i[4])
        print("JEB License Key:", SN)
        return SN

GetJebLicenseKey()
input("Enter to Exit...")
