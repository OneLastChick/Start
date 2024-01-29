num=int(input("您需要几项斐波那契数列"))
n1=0
n2=1
count=2

#判断输入的值是否合法
if num<=0:
    print("请输入一个正整数。")
elif num == 1:
    print(n1)
else:
    print("斐波那契数列:")
    print(n1,",",n2,end=' , ')
    while count < num:
        nth=n1+n2
        print(nth,end=' , ')
        n1=n2
        n2=nth
        count+=1
