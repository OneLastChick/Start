#通过用户输入数字，计算二次方程
#二次方式子 ax**2 + bx + c =0
#a,b,c用户提供，为实数  a不为0
import cmath
a=float(input('输入a:'))
b=float(input('输入b:'))
c=float(input('输入c:'))

d=(b**2)-(4*a*c)

sol1=(-b+cmath.sqrt(d))/(2*a)
sol2=(-b-cmath.sqrt(d))/(2*a)
print('结果为{0}和{1}'.format(sol1,sol2))
