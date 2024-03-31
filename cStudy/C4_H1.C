//编程验证哥德巴赫猜想
#include <stdio.h>
int isPrime(int num)
{
    if(num<=1)
    {
        return 0;
    }
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            return 0;  //如果能被整除，不是素数
        }
    }
    return 1;
}
int main()
{
    int evenNumber;
    printf("Please input evennumber>2\n");
    scanf("%d",&evenNumber);

    if(evenNumber<=4||evenNumber%2!=0)
    {
        printf("Error Input\n");
        return 1;
    }

    int found = 0;
    for(int i = 2 ;i<= evenNumber/2;i++)
    {
        if(isPrime(i)&&isPrime(evenNumber-i))   //挺巧妙的
        {
            printf("%d=%d+%d\n",evenNumber,i,evenNumber-i);
            found =1;
        }
    }
    return 0;
}