print("Runoob!")
"""
eee
这是注释
"""
# if True:
#     print("True")
# else:
#     print("False")

# str='123456789'
# print(str)
# print(str[0:-1:1])
# print(str[2:-1:1])
# print(str[1:5:2])
# print(str*2)
# print(r'HelloWorld\nHello')

# import sys;
# from sys import argv,path
# x='runoob';
# sys.stdout.write(x+'\n')
# print('命令行参数')
# for i in sys.argv:
#     print(i)
# print('\n Python路径为',sys.path)
# counter = 100
# miles = 1000.0
# name = "runoob"
# a,b,c,d=20,5.5,True,4+3j
# print((type(a),type(b),type(c),type(d)))
# print(counter,"+",miles)
# a = True
# b=False
# print(a and b)
# print(a or b)
# print(str(a))

# def reverseWords(input):
#     inputWords = input.split(" ")
#     inputWords = inputWords[-1::-1]
#     output = ' '.join(inputWords)
#     return output

# input = 'I like runoob'
# rw = reverseWords(input)
# print(rw + ' ' + input)



# sites = {'Google', 'Taobao', 'Runoob', 'Facebook', 'Zhihu', 'Baidu'}
# print(sites)

# if 'Runoob' in sites :
#     print('Yes')
# else :
#     print('No')



# a = set('abdef')
# b = set('akfed')
# print(a)
# print(a-b)
# print(a|b)
# print(a&b)
# print(a^b)




# dict = {}
# dict['one'] = "1-菜鸟教程"
# dict[2] = "2-菜鸟工具"

# tinydict = {'name':'runoob','code':1,'site':'www.runoob.com'}

# print(dict['one'])
# print(dict[2])
# print(tinydict)
# print(tinydict.keys())
# print(tinydict.values())

# dict([('runoob',1),('google',2),('taobao',3)])


    # print("\r{:3}%".format(i),end=' ')
    # time.sleep(0.05)






# #字典
# emptyDict = {'name':'Runoob','Age':7,'Class':'First'}
# emptyDict['Age'] = 8
# emptyDict['School'] = "Runoob"
# emptyDict.clear()
# print(emptyDict)
# print("Length:",len(emptyDict))
# print(type(emptyDict))



# ##集合
# #创建集合的两种方式
# set1={1,2,3,4}
# set2=set([4,5,6,7]) #set{}是创建字典
# basket = {'apple','orange','apple','pear','orange','banana'}
# print(basket)
# print('orange' in basket)  

# #两个集合的运算
# a = set('abracadabra')
# b = set('alacazam')
# print(a)     #集合a中的元素
# print(a-b)   #集合a中包含而b不包含
# print(a&b)    #集合a b都包含的元素
# print(a^b)    #不同时包含于ab的元素
# print(a|b)  #集合a或b包含的元素
# # {'d', 'c', 'a', 'r', 'b'}
# # {'r', 'd', 'b'}
# # {'a', 'c'}
# # {'r', 'l', 'd', 'm', 'b', 'z'}
# # {'m', 'd', 'r', 'l', 'b', 'z'}

# #集合的基本操作
# a.add('x')  #添加操作
# thisset=set(("Google","Runoob","Taobao"))
# thisset.add("Facebook")
# print(thisset)
# thisset.update([1,4],[5,6])  #更新操作，并且升序排列
# print(thisset)
# thisset.remove("Favebook")  #delete elements
# thisset.discard("Facebook") #if not exists,still runs
# thisset.pop() #delete one element randomly 先对集合进行无序排列，删除左面第一个元素
# len(thisset) #calculate number of elements
# thisset.clear()  #clear the elements of the set
# "Taobao" in thisset  

##条件控制
#if语句
# a=1
# while a < 7 :
#     if(a%2==0):
#         print(a,"is even")
#     else:
#         print(a,"is odd")
#     a+=1
# a = 1
# if a :
#     print('Yes')

# def http_error(status):
#     match status:
#         case 400:
#             return "Bad request"
#         case 404:
#             return "Not found"
#         case 418:
#             return "Im a teapot"
#         case 401|403|404:
#             return "Not allowed"
#         case _:
#             return "Something's wrong with the internet"

# mystatus = 400
# print(http_error(mystatus))

#for 循环实例
# sites = ["Baidu","Google","Runoob","Taobao"]
# for a in sites:
#     print(a)
# word = 'runoob'
# for letter in word:
#     print(letter)
# for number in range(1,6): #到6就终止，
#     print(number)

# n=5
# while n>0:
#     n-=1
#     if n==2:
#         continue
#     print(n)
# print('over')

# #判断质数的实例
# for n in range(2,10):
#     for x in range(2,n):
#         if n % x ==0:
#             print(n,'=',x,'*',n//x)
#             break
#     else:
#         print(n,'是质数')



# #pass 语句是空语句，不干任何事情，保持程序结构的完整性
# # while True:
# #     pass


# sequence = [12, 34, 34, 23, 45, 76, 89]
# for i, j in enumerate(sequence):
#      print(i, j)










#Python 推导式
#1.列表推导式
# names=['Bob','Tom','Alic','Jerry','Windy','Smith']
# new_names=[name.upper()for name in names if len(name)>3]
# print(new_names)
#exp 计算30以内可以被3整除的整数
# multiples=[i for i in range(30) if i%3==0 ]
# print(multiples)

# #2.字典推导式
# listdemo=['Google','Runoob','Taobao']
# #将列表中各字符串值为键，各字符串的长度为值，组成键对值
# newdick = {key:len(key) for key in listdemo}
# print(newdick)

# #3.集合推导式
# setnew = {i**2 for i in (1,2,3)}
# print(setnew)

# #4.元组推导式（生成器表达式）
# a = (x for x in range(1,10)) #返回的对象是生成器对象
# print(type(a))   
# # <class 'generator'>
# #生成一个元组还需用tuple（）函数，直接将生成器对象转换成元组
# print(tuple(a))
# print(type(tuple(a)))
# # <class 'tuple'>









# 迭代器
# list =[1,2,3,4]
# it = iter(list)
# print(next(it))
# for i in range(0,4):
#     print(next(it))
# import sys
# list=[1,2,3,4]
# it = iter(list)
# while True:
#     try:
#         print(next(it))
#     except StopIteration:
#         sys.exit()
# #创建一个迭代器
# class MyNumbers:
#     def __iter__(self):
#         self.a = 1
#         return self
#     def __next__(self):
#         if self.a<=20:
#             x=self.a
#             self.a+=3
#             return x
#         else:
#             raise StopIteration
# myclass = MyNumbers()
# myiter=iter(myclass)
# print(next(myiter))
# print(next(myiter))
# print(next(myiter))
# print(next(myiter))
# print(next(myiter))




# #生成器
# def countdown(n):
#     while n>0:
#         yield n
#         n-=1
# #创建生成器对象
# generator = countdown(5)



#两种迭代方式
# print(next(generator))
# print(next(generator))
# print(next(generator))

# for value in generator:
#     print(value)



# #使用yield实现斐波那契数列
# import sys
# def fibonacci(n):  #fibonacci 是一个生成器函数
#     a,b,counter = 0 , 1,0
#     while True:
#         if(counter>n):
#             return
#         yield a
#         a,b=b,a+b
#         counter +=1
# f=fibonacci(1000)

# while True:
#     try:
#         print(next(f),end=" ")
#     except StopIteration:
#         sys.exit()
    









#Python3函数
#test
# def max(a,b):
#     if a > b:
#         return a
#     else :
#         return b


# # def hello():
# #     print("Hello,World!")
# # hello()


# a=4
# b=5
# print(max(a,b))



# def area(width,height):
#     return width*height

# def print_welcome(name):
#     print("Welcome",name)

# print_welcome("Runoob")
# w=4
# h=5
# print("width =",w," heitht =",h," area =",area(w,h))

# def printme(str):
#     print(str)
#     return


# printme("Hello,World!")
# printme("Diaoyong again")



# a=[1,2,3]
# a="Runoob"

# def printinfo(name,age=35):  #设置默认值
#     print("名字",name)
#     print("年龄",age)
#     return

# printinfo(age=50,name="runoob")
# print("-------------------------")
# printinfo(name="Dog")

# #不定长参数
# def printinfo (arg1,*vartuple):
#     print("输出:")
#     print(arg1)
#     print(vartuple)
# printinfo(70,60,50)








# #lambda匿名函数
# x=lambda a : a+10
# print(x(5))
# sum=lambda arg1,arg2:arg1+arg2
# print("相加后的值为:",sum(10,20))
# print("相加后的值为:",sum(20,20))

# #将匿名函数封装在一个函数内部,用同样的代码创建多个匿名函数
# def myfunc(n):
#     return lambda a : a**n

# mydoubler=myfunc(2)
# mytripler=myfunc(3)

# print(mydoubler(11))
# print(mytripler(11))
# numbers = [1, 3, 6]
# newNumbers = tuple(map(lambda x: x , numbers))
# print(newNumbers)
#
# #无参的lambda函数
# f=lambda:"Hello,World!"
# print(f())

# #设置多个参数的lambda函数
# x=lambda a,b:a*b
# print(x(5,6))

# y=lambda a,b,c:a+b+c
# print(y(1,2,3))

# #lambda函数可以与map(),filter(),reduce()一起使用，在集合中执行各种操作
# #与map()一起使用
# numbers=[1,2,3,4,5]
# squared=list(map(lambda x:x*x,numbers))
# print(squared)

# even_numbers = list(filter(lambda x : x%2==0,numbers))
# print(even_numbers)

# from functools import reduce
# numbers=[1,2,3,4,5]
# product=reduce(lambda x,y:x*y,numbers)
# print(product)



# #return 语句
# def sum(arg1,arg2):
#     total=arg1+arg2
#     print("函数内:",total)
#     return total


# total = sum(10,20)
# print("函数外:",total)












#数据结构
#列表
#索引以1开始
# a=[66.25,333,333,1,1234.5]
# print(a.count(333),a.count(66.25),a.count('x'))  #返回该元素在该列表出现了多少次
# a.insert(2,-1)
# print(a)
# a.append(333)   #在尾部添加该数字
# print(a)
# a.index(333)   #获取第一个为该元素的索引
# print(a)
# a.remove(333)  #删除列表中为该值的第一个元素
# print(a)
# a.reverse()    #逆序该列表
# print(a)
# a.sort()    #升序排列该列表
# print(a)
# #将列表当做堆栈使用
# stack=[3,4,5]
# stack.append(6)
# stack.append(7)   #添加一个元素到尾部
# print(stack)
# stack.pop()     #删除尾部的元素
# print(stack)
# stack.pop()
# print(stack)    
# #将列表当作队列使用
# from collections import deque
# queue = deque(["Eric","John","Michael"])
# print(type(queue))
# queue.append("Terry")
# queue.append("graham")
# print(queue.popleft())  
# print(queue.pop())

# #列表推导式
# vec=[2,4,6]
# print([3*x for x in vec])
# print([[x,x**2] for x in vec])

# freshfruit=['banana','loganberry','passion fruit']
# print([weapon.strip() for weapon in freshfruit])
# print([3*x for x in vec if x>3])
# print([3*x for x in vec if x<2])


# #嵌套列表解析
# matrix = [[1,2,3,4],[5,6,7,8],[1,2,3,4]]
# #将3x4矩阵转置
# #method1
# print([[row[i] for row in matrix] for i in range(4)]) 
# #method2
# transposed=[]
# for i in range(4):
#     transposed.append([row[i] for row in matrix])
# print(transposed)   
# #method3
# trans=[]
# for i in range(4):
#     transposed_row=[]
#     for row in matrix:
#         transposed_row.append(row[i])
#     trans.append(transposed_row)
# print(trans)[]


# #del语句
# a=[0,1,2,3,4,5]
# del a[0]  #删除索引
# del a[:] #清空这个列表
# del a  #删除这个变量




# #元组和序列
# t = 12345,54321,'hello!'
# print(t[0])
# print(t)
# u=t,(1,2,3,4,5)
# print(u)

#集合
#集合是一个无序不重复元素的集 
#创建一个空集合二必须用set()
#{}只会创建一个空的字典
# basket={'apple','orange','apple','pear','orange','banana'}
# print(basket)


# #字典
# tel={'jack':4098,'sape':4139}
# tel['guido']=4127
# print(tel)
# print(list(tel.keys()))
# print(list(tel.values()))
# print('jack' not in tel)
# #构造函数dict()直接从键值对元组列表中构建字典。
# print(dict([('sape',4139)]))
# print({x:x**x for x in (2,4,6)})



# #遍历技巧
# #在字典中遍历时。关键字和对应的值可以用items()方法同时解读出来
# knights={'gallahad':'the pure','robin':'the brave'}
# for k,v in knights.items():
#     print(k,'+',v)
# #在列表中遍历的时，索引位置和对应值可以使用enumerate()函数同时得到
# for i,v in enumerate(['1','2','3']):
#     print(i,v)
# #同时遍历两个或更多的列表，可以使用zip()组合
# questions=['name','quest','favorite color']
# answers=['lancelot','the holy grail','blue']
# for q,a in zip(questions,answers):
#     print('What is your {0}?It is {1}.'.format(q,a))
# #反向遍历一个序列，首先指定这个序列，然后调用reversed()函数
#     for i in reversed(range(1,10,2)):
#         print(i)
# #按顺序遍历一个序列，使用sorted()函数返回一个已排序的序列，并不修改原值  
# basket=['apple','orange','apple','pear','orange','banana']
# for f in sorted(set(basket)):
#     print(f)

# import sys
# print('命令行参数如下:')
# for i in sys.argv:
#     print(i)
# print('\n\nPython Path:',sys.path,'\n')














 
#输入输出
# s='Hello,Runoob'
# print(str(s))
# print(repr(s))
# #用两种方式输出一个平方与立方的表
# for x in range(1,11):
#     print(repr(x).rjust(2),repr(x*x).rjust(3),end=' ')
#     print(repr(x*x*x).rjust(4))  #repr的rjust方法可以使字符串靠右，并向左边填充空格
# for x in range(1,11):
#     print('{0:2d} {1:3d} {2:4d}'.format(x,x*x,x*x*x))
# print('12'.zfill(5)) #str的zfill方法  在数字的左边填0   返回的都是一个新的字符串
# #str.format()的用法
# print('{name}网址:{site}'.format(name='菜鸟教程',site='www.runoob.com'))
# #无关键字默认为索引
# #索引和关键字参数可以任意的结合

# import math
# print('常量PI的近似值为:{}'.format(math.pi))
# #{}里输入使用!a 进行ascii转化 !s使用str()  !r 使用repr()
# #可选项:和格式标识符可以跟着字段名
# print('常量PI的近似值为{0:.3f}.'.format(math.pi))
# print('常量PI的近似值为{0:99}.'.format(math.pi))
# #旧式字符串格式化
# print('常量PI的值近似为：%5.3f'%math.pi)

#读取键盘输入
# str=input("请输入:")
# print("你输入的内容是:",str)

#文件读写
# f = open("C:/Users/Npc/Desktop/WorkSpace/pythonStudy/foo.txt","w")
# f.write("Python是一个非常好的语言。\n是的的确非常好\n")
# f.close()

# #f.readline()
# f=open("foo.txt","r")
# str=f.readline()
# print(str)
# f.close()
# f=open("foo.txt","r")
# str=f.readlines()
# print(str)
# f.close()
# f=open("foo.txt","r")
# for line in f:
#     print(line,end='')
# f.close()

# #f.write()
# f=open("foo2.txt","w")
# num=f.write("Python是一个非常好的语言.\n是的，的确非常好\n.")
# print(num) #返回的是写入的字符数
# f.close()
# #写入不是字符串的东西，需要先进行转换
# f=open("foo.txt","w")
# value=('www.runoob.com',14)
# s=str(value)
# f.write(s)
# f.close()

#f.tell()用于返回文件当前的读写位置即文件指针的位置.文件指针表示从文件开头开始的字节数偏移量
#f.seek()改变文件指针当前的位置，可以使用f.seek(offset,from_what)
#from_what的值0代表开头，1代表当前位置，2代表文件末尾
#seek(x,0)从文件的首行首字符开始移动x个字符
#seek(x,1) 从当前位置往后移动x个字节
#seek(-x,2)从末尾向前移动x个字节
# f=open("foo.txt","rb+")
# print(f.write(b'0123456789abcdef'))
# print(f.seek(5))
# print(f.read(1))
# print(f.seek(-3,2))
# print(f.read(1))




# #pickle模块 实现基本的数据序列和反序列化
# #基本接口:pickle.dump(obj,file,[,protocaol])
# #通过序列化操作我们能将程序中运行的对象信息保存到文件中去，
# #反序列化我们能够从文件中创建上一次程序保存的对象
# import pickle
# # #使用pickle模块将数据对象保存到文件
# # data1={'a':[1,2.0,3,4+6j],'b':('string',u'unicode string'),'c':None}
# # selfref_list=[1,2,3]
# # selfref_list.append(selfref_list)
# # output=open('data.pkl','wb')
# # pickle.dump(data1,output)
# # pickle.dump(selfref_list,output,-1)
# # output.close

# # 使用pickle模块中从文件中重构python对象
# import pprint
# pkl_file=open('data.pkl','rb')
# data1=pickle.load(pkl_file)
# pprint.pprint(data1)
# data2=pickle.load(pkl_file)
# pprint.pprint(data2)










#异常处理
while True:
    try:
        x=int(input("请输入一个数字:"))
        break
    except ValueError:
        print("您输入的不是数字，请再次尝试输入")
        




