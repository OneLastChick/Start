#include <stdio.h>
int main()
{
    int x=0;
    for(x=100;x<1000;x++)
    {
        unsigned long b= x*x;
        int a1=b%10;
        int a2=(b/10)%10;
        int a3=(b/100)%10;
        if((a1+10*a2+100*a3)==x)
        {
            printf("%d\n",x);
        }
    }
}