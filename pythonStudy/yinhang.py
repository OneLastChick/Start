means=[0,0,0]
loan=0
rate=0
pay=0
investment=0
annual_rate=0
def fixed_investment(inv,a_rate,y):
    global means
    inv=12*inv
    a_rate=a_rate/100
    if a_rate==0:
        excepted=0
    else:
        excepted = inv*(1+a_rate)*(pow((1+a_rate),y)-1)/a_rate
    print("定投的预期投入为:%.2f"%excepted)
    means[1]=excepted
    return excepted

def balance():
    total=0
    for i in means:
        total +=i
    print("你的资产总额为:%.2f"%total)
    print("你的资产明细为:\n")
    print("存款:%.2f"%means[0])
    print("理财:%.2f"%means[1])
    print("负债:%.2f"%means[2])
    
def saving(amount):
    global means
    if amount < 0:
        print("存款金额不可小于0")
    else :
        means[0]+=amount
        print("已存款:%.2f元"%amount)
        print("当前余额:%.2f元"%means[0])

def draw_money(drawing):
    global means
    if drawing < 0:
        print("取款的金额不可小于0!")
    elif drawing > means[0]:
        print("取款金额不可超过余额!")
    else:
        means[0] -=drawing
        print("已取款:%.2f"%drawing)
        print("当前余额:%.2f元"%means[0])
        
def loans(loan,rate,pay,years):
    global means
    if pay < (loan-pay)*rate:
        print("你是还不完的!")
    else:
        if years ==0:
            count=0
            while loan > 0:
                loan -= pay
                loan *= (1+rate)
                count+=1
            print("将在%d年后还完贷款。"%count)
        else :
            for _ in range(years):
                loan-=pay
                if loan ==0:
                    break
                else:
                    loan*=(1+rate)
                    print("你现在的负债是:%.2f"%loan)
        return loan
def future(years):
    income=fixed_investment(investment,annual_rate,years)
    debt=loans(loan,rate,pay,years)
    captial=means[0]+income-debt
    print("你在第%i年的总资产有:%.3f"%(years,captial))

def init():
    print()
    print('''以下为可办理的业务：
        1. 查询资产
        2. 存款
        3. 取款
        4. 计算复利
        5. 计算贷款
        6. 计算未来资产
        q. 退出''')

def main():
    init()
    while True:
        choice=input("请输入您要办理的业务代码:")
        if choice == "1":
            balance()
        elif choice == "2":
            inc=float(input("请输入存款金额："))
            saving(inc)
        #取款
        elif choice == "3":
            dec=float(input("请输入取款金额:"))

        
        #计算定投
        elif choice == "4":
            investment = float(input("请输入每月定投金额:"))
            annual_rate = float(input("请输入年收益率:"))
            years = int(input("请输入定投期限(年):"))
            if investment <=0 or annual_rate<=0 or years <=0:
                print("输入的数据有误")
            else:
                money=fixed_investment(investment,annual_rate,years)
            print(f"最终收获:{money:.2f}元")
        #计算贷款
        elif choice == "5":
            loan=float(input("请输入当前贷款:"))
            rate=float(input("请输入年利率:"))
            pay=float(input("请输入每年还款:"))
            if loan <=0 or rate <=0 or pay <=0:
                print("输入的数据有误")
            else:
                loans(loan,rate,pay,0)
        elif choice == "6":
            years = int(input("希望查询多少年后的财务状况?"))
            future(years)
        
        #退出
        elif choice == 'q':
            print("欢迎下次光临，再见!")
            break
        else:
            print("你输入的指令有误，请重新输入\n")

if __name__ == '__main__':
    main()