def encode_bytes(num):
    s = "" # 创建一个空字符串
    for i in range(0, len(num), 3): # 从0开始，每隔3步遍历num的索引
        numa = num[i] # 获取num[i]的值，赋值给numa
        numb = num[i+1] # 获取num[i+1]的值，赋值给numb
        numc = num[i+2] # 获取num[i+2]的值，赋值给numc
        num1 = (numa << 3) | (numb >> 3) # 将numa左移3位，与numb右移3位按位或，赋值给num1
        num2 = ((numb & 7) << 4) | numc # 将numb与7按位与，左移4位，与numc按位或，赋值给num2
        s += chr(num1) + chr(num2) # 将num1和num2转换成字符，追加到s中
    return s # 返回s

input_num = [13, 35, 3, 13, 7, 3, 12, 46, 3, 15, 30, 1, 6, 19, 9, 6, 62, 6, 7, 3, 6, 12, 34, 13, 12, 51, 1, 12, 11, 6, 5, 43, 4, 12, 11, 3, 6, 50, 13, 7, 14, 6, 6, 6, 6, 5, 43, 3, 6, 43, 8, 6, 59, 3, 12, 35, 3, 12, 11, 1, 6, 46, 6, 6, 15, 13]
result = encode_bytes(input_num)
print(result)