import cmath
num = int(input("输入一个数字:"))
num_sqrt=cmath.sqrt(num)
print('{0}的平方根为{1:0.3f}+{2:0.3f}j'.format(num,num_sqrt.real,num_sqrt.imag))
