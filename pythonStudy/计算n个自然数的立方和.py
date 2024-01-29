def sumOfSeries(n):
    sum=0
    for i in range(1,n+1):
        sum+=i**3
    return sum
n=int(input("你想计算n个自然数的立方和"))
print(sumOfSeries(n))

