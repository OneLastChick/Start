#生成随机数
import random

random_number=random.random()
print(random_number)
print(random.randint(0,9))

#使用random.shuffle(sequence)对列表的元素进行随机排序
list1=[1,2,3,4,5]
random.shuffle(list1)
print(list1)
