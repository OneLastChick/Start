//实验4-1  计算s=1!+...+n!
//利用递归方式实现
#include <stdio.h>
unsigned long long sum_fac(int n);
int main()
{
    int k;
    for(k=1;k<=20;k++)
    {
        printf("k=%d\tThe sum is %llu\n",k,sum_fac(k));
    }
    return 0;
}
unsigned long long sum_fac(int n)
{
    unsigned long long s=0;  
    int i;
    unsigned long long fac=1;
    for(i=1;i<=n;i++)
    {
        fac*=i;
    }
    //设置递归的终界
    if(n==1)
    {
        s=1;
    }
    else
    {
        s+=sum_fac(n-1)+fac;
    }
    return s;
}