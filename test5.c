#include <stdio.h>
int main()
{
    int count,max,x,t;
    printf("Please input a number:");
    scanf("%d",&x);
    count=max=0;
    while(x)
    {
        t=x%10;
        if(t==0)   //Edit 改为==  判断
        {
            count++;
        }
        if(t>max)
        { 
            max=t;    //Edit  将t的值赋给max
        }
        x=x/10;
    }
    printf("zero:%d ,maxnumber: %d\n",count,max);
    return 0;
}