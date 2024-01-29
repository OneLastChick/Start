//计算级数S=1+sqrt(2)+...+sqrt(10)  利用牛顿迭代公式
#include <stdio.h>
#include <math.h>
#define EPS 1.0E-7
int main()
{
    int x;
    double s=0,x1=1,x2,limit;
    for(x=1;x<=10;x++)
    {
        do{
            x2=(x1+x/x1)/2;
            limit=fabs(x1-x2);
            x1=x2;
        }   while(limit>EPS);
        s+=x2;
    }
    printf("s=%.8f\n",s);
    return 0;
}