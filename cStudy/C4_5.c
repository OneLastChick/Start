//找水仙花数   即 3位正整数=各位数字的三次方之和
#include<stdio.h>
int isNarcissusNum(int x)
{
    int a=(x/100);
    int b=(x%100)/10;
    int c=x%10;
    if(x==a*a*a+b*b*b+c*c*c)
        return 1;
    else return 0;
}
int main()
{
    for(int i=100;i<1000;i++)
    {
        if(isNarcissusNum(i)==1)
        {
            printf("%d 是a NarcissusNum\n",i);
        }
    }
    return 0;
}