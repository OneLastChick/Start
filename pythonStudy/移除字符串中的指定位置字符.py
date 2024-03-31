test_str="Runoob"
print("原始字符串为:"+test_str)
new_str=""
for i in range(0,len(test_str)):
    if i != 2:
        new_str=new_str+test_str[i]
print("字符串移除后为:"+new_str)