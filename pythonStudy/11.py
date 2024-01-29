# def some_function(s):
#     ret = []                # 创建一个空列表并将其存储在ret中
#     ls = list(s)            # 将输入字符串s转换为列表ls
#     for i in range(len(ls)): # 对列表ls的每个元素进行迭代
#         num1 = ord(ls[i])   # 获取ls[i]的ASCII码并存储在num1中
#         num2 = ord(ls[i + 1]) if i + 1 < len(ls) else 0 # 获取ls[i+1]的ASCII码，如果i+1超出列表边界，则为0
        
#         numa = (num1 & 248) >> 3 # 对num1执行位运算，获取numa的值
#         numb = ((num1 & 7) << 4) | ((num2 & 240) >> 4) # 对num1和num2执行位运算，获取numb的值
#         numc = num2 & 15 # 对num2执行位运算，获取numc的值
        
#         ret.append([numa, numb, numc]) # 将[numa, numb, numc]添加到ret中
    
#     return ret

# # 示例用法
# input_string = "l3hsec"  # 传入一个字符串作为示例
# result = some_function(input_string)
# print(result)
# def calculate_ret(s):
#     ret = []
#     ls = list(s)
#     for i in range(len(ls)):
#         num1 = ord(ls[i])
#         num2 = ord(ls[i + 1]) if i + 1 < len(ls) else 0
        
#         numa = (num1 & 248) >> 3
#         numb = ((num1 & 7) << 4) | ((num2 & 240) >> 4)
#         numc = num2 & 15
        
#         ret.append([numa, numb, numc])
    
#     return ret

# # 示例用法
# input_string = "l3hsec"
# result = calculate_ret(input_string)
# print(result)
# def some_function(s):
#     ret = []                # 创建一个空列表并将其存储在ret中
#     ls = list(s)            # 将输入字符串s转换为列表ls
#     for i in range(len(ls)): # 对列表ls的每个元素进行迭代
#         num1 = ord(ls[i])   # 获取ls[i]的ASCII码并存储在num1中
#         num2 = ord(ls[i - 1]) if i - 1 >= 0 else 0 # 获取ls[i-1]的ASCII码，如果i-1小于0，则为0
        
#         numa = (num1 & 248) >> 3 # 对num1执行位运算，获取numa的值
#         numb = ((num1 & 7) << 4) | ((num2 & 240) >> 4) # 对num1和num2执行位运算，获取numb的值
#         numc = num2 & 15 # 对num2执行位运算，获取numc的值
        
#         ret.extend([numa, numb, numc]) # 将[numa, numb, numc]添加到ret中
    
#     return ret

# # 示例用法
# input_string = "l3hsec"  # 传入 "l3hsec" 作为示例
# result = some_function(input_string)
# print(result)
# def reverse_decrypt(result):
#     s = ""
#     for i in range(0, len(result), 3):
#         numa, numb, numc = result[i], result[i + 1], result[i + 2]
#         num1 = (numa << 3) | ((numb & 0xf0) >> 4)
#         num2 = ((numb & 0x0f) << 4) | numc
#         s += chr(num1)
#         if num2 != 0:
#             s += chr(num2)
#     return s

# # 示例用法
# result = [13, 35, 3, 13, 7, 3, 12, 46, 3, 15, 30, 1, 6, 19, 9, 6, 62, 6, 7, 3, 6, 12, 34, 13, 12, 51, 1, 12, 11, 6, 5, 43, 4, 12, 11, 3, 6, 50, 13, 7, 14, 6, 6, 6, 6, 5, 43, 3, 6, 43, 8, 6, 59, 3, 12, 35, 3, 12, 11, 1, 6, 46, 6, 6, 15, 13]
# original_string = reverse_decrypt(result)
# print(original_string)
# def some_function(s):
#     ret = []            # 创建一个空列表并将其存储在 ret 中
#     ls = list(s)        # 将输入字符串 s 转换为列表 ls
#     for i in range(len(ls)):
#         num1 = ord(ls[i])   # 获取 ls[i] 的 ASCII 码并存储在 num1 中
#         if i + 1 < len(ls):
#             num2 = ord(ls[i + 1])
#         else:
#             num2 = 0
        
#         numa = (num1 & 248) >> 3   # 对 num1 执行位运算，获取 numa 的值
#         numb = ((num1 & 7) << 4) | ((num2 & 240) >> 4)   # 对 num1 和 num2 执行位运算，获取 numb 的值
#         numc = num2 & 15   # 对 num2 执行位运算，获取 numc 的值
        
#         ret.extend([numa, numb, numc])   # 将 [numa, numb, numc] 添加到 ret 中
    
#     return ret

# # 示例用法
# input_string = "L3HSEC"
# result = some_function(input_string)
# print(result)


# def decode_bytes(s):
#     ret = []
#     ls = list(s)
#     i = 0
#     while i < len(ls):
#         num1 = ord(ls[i])
#         i += 1
#         if i < len(ls):
#             num2 = ord(ls[i])
#             i += 1
#         else:
#             num2 = 0  # 如果没有下一个字节，则将num2设为0
#         numa = (num1 & 248) >> 3
#         numb = ((num1 & 7) << 4) | ((num2 & 240) >> 4)
#         numc = num2 & 15
#         ret += [numa, numb, numc]
#     return ret


# input_string = "l3hsec"
# result = decode_bytes(input_string)
# print(result)

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
