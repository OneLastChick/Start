binary_string = "01010101 01001101 01000001 01000111"

# 删除空格
binary_string = binary_string.replace(" ", "")

# 每6位一组分割二进制字符串，并转换为十进制
grouped_binary = [binary_string[i:i+6] for i in range(0, len(binary_string), 6)]
decimal_values = [int(group, 2) for group in grouped_binary]

# 输出十进制值
for value in decimal_values:
    print(value)
