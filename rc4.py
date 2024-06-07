from Crypto.Cipher import ARC4
import base64

def rc4_encrypt(data, key1):        # 加密
    key = bytes(key1, encoding='utf-8')
    enc = ARC4.new(key)
    res = enc.encrypt(data)
    res = base64.b64encode(res)
    res = str(res, 'utf-8')
    return res

def rc4_decrypt(data, key1):        # 解密
    key = bytes(key1, encoding='utf-8')
    enc = ARC4.new(key)
    res = enc.decrypt(data)
    res = str(res, 'utf-8')
    return res

if __name__ == "__main__":
    key = 'XYCTF'  # 需要加密的内容
    encrypt_data = b'Z<F\xe0"\x8bDM\xec\xc7e\x1c\x8a|\xa9;\xa4\xcb5\xa4o~\xb5\x89\xbe\xf4'  # 加密key
    
    # encrypt_data = rc4_encrypt(data, key)     # 加密方法
    # print('加密后:', encrypt_data)
    print('解密后:', rc4_decrypt(encrypt_data, key))         # 解密方法修改这段代码

def hex_to_bytes(hex_string):
    byte_array = bytearray()
    for i in range(0, len(hex_string), 2):
        byte = int(hex_string[i:i+2], 16)
        byte_array.append(byte)
    return byte_array

# 示例用法
hex_string = "5a3c46e0228b444decc7651c8a7ca93ba4cb35a46f7eb589bef4"
byte_array = hex_to_bytes(hex_string)
print(byte_array)  # 打印转换后的字节数组
