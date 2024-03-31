from ctypes import * 
def encrypt(v,k):
	v0=c_uint32(v[0])
	v1=c_uint32(v[1])
	sum1=c_uint32(0)
	delta=0x9e3779b9
	for i in range(32):
		v0.value+=(((v1.value<<4)^(v1.value>>5))+v1.value)^(sum1.value+k[sum1.value&3])
		sum1.value+=delta
		v1.value+=(((v0.value<<4)^(v0.value>>5))+v0.value)^(sum1.value+k[(sum1.value>>11)&3])
	return v0.value,v1.value
 
def decrypt(v,k):
	v0=c_uint32(v[0])
	v1=c_uint32(v[1])
	delta=0x9e3779b9
	sum1=c_uint32(delta*32)
	for i in range(32):
		v1.value-=(((v0.value<<4)^(v0.value>>5))+v0.value)^(sum1.value+k[(sum1.value>>11)&3])
		sum1.value-=delta
		v0.value-=(((v1.value<<4)^(v1.value>>5))+v1.value)^(sum1.value+k[sum1.value&3])
	return v0.value,v1.value
 
if __name__=='__main__':
	a=[1,2]
	k=[2,2,3,4]
	print("加密前数据:",a)
	res=encrypt(a,k)
	print("加密后的数据:",res)
	res=decrypt(res,k)
	print("解密后数据:",res)