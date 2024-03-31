# #Python十进制转二进制，8进制，16进制
# dec = int (input("输入数字:"))
# print("十进制:",dec)
# print("二进制",bin(dec))
# print("八进制",oct(dec))
# print("十六进制",hex(dec))
hexadecimal_number = '2a'
decimal_number = int(hexadecimal_number, 16)
binary_number = bin(decimal_number)
octal_number = oct(decimal_number) 

print('十六进制数:', hexadecimal_number)
print('转换为十进制:', decimal_number)
print('转换为二进制:', binary_number)
print('转换为八进制:', octal_number)