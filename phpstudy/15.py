# 定义一个函数，用来判断一个字母是否是辅音字母
def is_consonant(letter):
    # 把字母转换为小写
    letter = letter.lower()
    # 如果字母不是元音字母，也不是非拉丁字母，那么就是辅音字母
    if letter not in "aeiou" and letter.isalpha():
        return True
    else:
        return False

# 定义一个函数，用来根据第一原则还原单词
def reverse_creat(word):
    # 如果单词的长度大于1，且最后一个字母是e或E，且倒数第二个字母是辅音字母
    if len(word) > 1 and word[-1] in "eE" and is_consonant(word[-2]):
        # 那么就删除最后一个字母
        word = word[:-1]
    # 返回还原后的单词
    return word

# 定义一个函数，用来根据第二原则还原单词
def reverse_referer(word):
    # 初始化一个空字符串，用来存储还原后的单词
    new_word = ""
    # 初始化一个空集合，用来存储已经出现过的辅音字母
    seen_consonants = set()
    # 遍历单词中的每个字母
    for letter in word:
        # 如果字母是辅音字母，且没有在集合中出现过
        if is_consonant(letter) and letter.lower() not in seen_consonants:
            # 那么就把它加入到新单词中
            new_word += letter
            # 并把它加入到集合中，表示已经出现过
            seen_consonants.add(letter.lower())
        # 如果字母不是辅音字母
        elif not is_consonant(letter):
            # 那么就把它加入到新单词中
            new_word += letter
            # 并清空集合，表示重新开始计算辅音字母的出现次数
            seen_consonants.clear()
    # 返回还原后的单词
    return new_word

# 定义一个列表，用来存储给出的代码中的字符数组
cod_dict = []
# 给列表添加字符数组
cod_dict += ['nymeh1niwemflcir}echaet'] 
cod_dict += ['a3g7}kidgojernoetlsup?h']
cod_dict += ['ulw!f5soadrhwnrsnstnoeq']
cod_dict += ['ct{l-findiehaai{oveatas']
cod_dict += ['ty9kxborszstguyd?!blm-p']

# 定义一个空字符串，用来存储解密后的文本
text = ""
# 遍历列表中的每个字符数组
for cod in cod_dict:
    # 把字符数组按照空格分割成单词列表
    words = cod.split()
    # 遍历单词列表中的每个单词
    for word in words:
        # 先根据第一原则还原单词，再根据第二原则还原单词，并把结果加入到文本中，并在每个单词后面加上一个空格
        text += reverse_referer(reverse_creat(word)) + " "
    # 在每个字符数组后面加上一个换行符，表示换行
    text += "\n"

# 打印解密后的文本
print(text)

