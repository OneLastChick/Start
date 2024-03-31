year=int(input("输入一个年份:"))
if (year%4) ==0 :
    if (year%100) == 0:
        if(year%400) ==0 :
            print("%d 是闰年" %year)
        else :
            print("%d 不是闰年" %year)
    else:
        print("%d 是闰年" %year)
else:
    print("%d 不是闰年"%year)