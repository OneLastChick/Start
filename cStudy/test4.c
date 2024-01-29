#include <stdio.h>
int isPerfect(int x)
{
    int y,s;
    for(s=0,y=1;y<=x/2;y++)   //Edit：边界条件 <=
    {
        if(!(x%y))
        {
            s+=y;
        }
    }
    if(s==x)
        return 1;
    return 0;
}
int main()
{
    int a;
    printf("PerfectnumberBelow1000:");
    for(a=1;a<=1000;a++)
    {
        if(isPerfect(a))
        {
            printf("%8d",a);
        }
    }
    return 0;
}