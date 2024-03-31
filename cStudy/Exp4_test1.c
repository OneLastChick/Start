//实验4-1  计算s=1!+...+n!
//Edit1,调用函数在主函数之后要声明引用

#include <stdio.h>
unsigned long long sum_fac(int n);
int main()
{
    int k;
    //Edit2 由于k=20时  使用long类型导致数值溢出  改成unsigned long long 即可
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
        s+=fac;
    }
    
    return s;
}