# import codecs
# import base64
# miwen="a1zLbgQsCESEIqRLwuQAyMwLyq2L5VwBxqGA3RQAyumZ0tmMvSGM2ZwB4tws"
# decode1=codecs.decode(miwen,'rot_13')  #rot 13解密
# decode2=decode1[::-1]  #字符串反转
# decode3=base64.b64decode(decode2)
# decode4=""
# for char in decode3:
#     sc=chr((ord(char)-1)%256)
#     decode4 += sc
# print(decode4)
import codecs
import base64

miwen = "a1zLbgQsCESEIqRLwuQAyMwLyq2L5VwBxqGA3RQAyumZ0tmMvSGM2ZwB4tws"

# 解密ROT13
decode1 = codecs.decode(miwen, 'rot_13')

# 反转字符串
decode2 = decode1[::-1]

# Base64解码
decode3 = base64.b64decode(decode2)

# 向前移动一个位置
decode4 = ""
for char in decode3:
    shifted_char = chr((char - 1) % 256)
    decode4 += shifted_char
decode5 = decode4[::-1]

print(decode5)
