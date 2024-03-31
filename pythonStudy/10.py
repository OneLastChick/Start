# 源程序如下：


def decode_bytes(s):
    ret = [] # 创建一个空列表
    ls = list(s) # 将字符串s转换成字符列表ls
    for i in range(0, len(ls), 2): # 从0开始，每隔2步遍历ls的索引
        num1 = ord(ls[i]) # 获取ls[i]的ASCII码值，赋值给num1
        num2 = ord(ls[i+1]) # 获取ls[i+1]的ASCII码值，赋值给num2
        numa = (num1 & 248) >> 3 # 将num1的高5位右移3位，赋值给numa
        numb = ((num1 & 7) << 3) | ((num2 & 240) >> 4) # 将num1的低3位左移3位，与num2的高4位右移4位按位或，赋值给numb
        numc = num2 & 15 # 将num2的低4位赋值给numc
        ret += [numa, numb, numc] # 将numa, numb, numc组成一个列表，追加到ret中
    return ret # 返回ret

input_string = "l3hsec"
result = decode_bytes(input_string)
print(result)