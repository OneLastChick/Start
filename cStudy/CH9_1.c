// #include<stdio.h>
// int main()
// {
// struct date
// {
// int year;
// int month;
// int day;
// }date;
// int i,leap;
// int days=0;

// scanf("%d %d %d",&date.year,&date.month,&date.day);
//  if(!isdate(date.year,date.month,date.day)) {printf("error"); return 0;}
// if((date.year%4==0&&date.year%100!=0)||date.year%400==0)
// leap=1;
// for(i=1;i<date.month;i++)
// {
// if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
// days+=31;
// else if(i==4 || i==6 || i==9 || i==11)
// days+=30;
// else
// {
// if(leap==1)
// days+=29;
// else
// days+=28;
// }
// }
// days+=date.day;
// printf("%d",days);
// }
#include <stdio.h>
int isdate(int year,int month,int day,int gap)
{
    if (month < 1 || month > 12) {
        return 0; // 月份应该在1到12之间
    }
    if(gap==1&&month==2)
    {
        if(day>29)
        {
            return 0;
        }
    }
    else if(gap==0&&month==2)
    {
        if(day>28)
        {
            return 0;
        }
    }
    else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    {
        if(day>31)
        {
            return 0;
        }
    }
    else 
    {
        if(day>30)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    struct date
    {
        int year;
        int month;
        int day;
    };
    struct date date;
    int sum=0;
    int gap=0;
    scanf("%d %d %d",&date.year,&date.month,&date.day);
    //判断闰年
    if((date.year%4==0&&date.year%100!=0)||(date.year%400==0))
    {
        gap=1;
    }
    if(!isdate(date.year,date.month,date.day,gap)) {printf("error"); return 0;}
    for(int i=1;i<=date.month;i++)
    {
        if(i==2&&gap==1)
        {
            sum=sum+gap;
        }
        if(i==1||i==3||i==5||i==7||i==8||i==10)
        {
            sum+=31;
        }
        else if(i==2)
        {
            sum+=28;
        }
        else if(i==4||i==6||i==9||i==11)
        {
            sum+=30;
        }
        else
        {
            sum+=date.day;
        }
       
    }
    printf("%d",sum);
}