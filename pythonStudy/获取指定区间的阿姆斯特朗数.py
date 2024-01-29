# #检测用户输入的数字是否是阿姆施特狼数
# num=int(input("请输入一个数字"))
# sum=0
# n=len(str(num))    #判断是n位正整数

# temp=num
# while temp > 0 :
#     digit=temp %10
#     sum+=digit**n
#     temp //= 10
# if num == sum :
#     print("Yes")
# else :
#     print("No")

#获取指定期间内的阿姆斯特朗鼠
print("现在您可以获取指定期间内的阿姆斯特朗数") 
lower=int(input("最小值:"))
upper=int(input("最大值:"))

for num in range(lower,upper+1):
    sum=0
    n=len(str(num))

    temp=num
    while temp > 0:
        digit=temp%10
        sum+=digit**n
        temp //= 10
    if num==sum:
        print(num,end=' ')
