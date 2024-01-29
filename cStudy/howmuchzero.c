#include<stdio.h>
int main()
{
    int count,max,x,t;
    printf("Please input a numper:");
    scanf("%d",&x);
    count=max=0;
    while(x)
    {
        t=x%10;
        if(t==0)
            count++;
        if(t>max)
            max=t;
        x=x/10;
    }
    printf("This number has %d zero,and the max number is %d\n",count,max);
    return 0;
}