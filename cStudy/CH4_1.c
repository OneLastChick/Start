#include <stdio.h>
int countdays(int year,int month,int day)
{
    int sum=0;
    int c[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(!(year%4)&&(year%100)||!(year % 400))
    {
        c[1]=29;
    }
    for(int i=1;i<month;i++)
    {
        sum+=c[i-1];
    }
    sum += day;
    return sum;
}
int main()
{
    int year,month,day;
    scanf("%d %d %d",&year,&month,&day);
    printf("%d",countdays(year,month,day)); 
    
}