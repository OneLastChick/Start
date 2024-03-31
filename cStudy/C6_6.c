#include <stdio.h>
//指针函数实现用辗转相除法求a和b的最大公约数和最小公倍数
void getGcdLcm(int a,int b,int * gcdPtr,int * lcmPtr)
{
    int r,x=a,y=b;
    if(x<y)
    {
        r=x;
        x=y;
        y=r;
    }
    do{
        r=x%y;
        x=y;
        y=r;
    }while(r);
    *gcdPtr =x;
    *lcmPtr = a*b/x;
}
int main()
{
    int a=21,b=56,gcd,lcm;
    getGcdLcm(a,b,&gcd,&lcm);
    printf("gcd=%d,lcm=%d\n",gcd,lcm);
    return 0;
}