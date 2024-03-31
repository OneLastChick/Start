//计算星期几
#include <stdio.h>
#define leap_y(year) ((year)%4==0&&(year)%100!=0||(year)%400==0?1:0)
int daytab[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
struct date{
    int year,month,day;
};
int day_of_year(struct date *current)
{
    int days=0;
    for(int k=1;k<current->month;k++)
    {
        days+=daytab[leap_y(current->year)][k];
    }
    days+=current->day;
    return days;
}
void output(struct date *p,int days)
{
    char *week[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    printf("%d-%d-%d is %s",p->year,p->month,p->day,week[days]);
}
int main()
{
    int daies[]={365,366};
    unsigned long week =0;
    struct date d;
    int k;
    for(;;)
    {
        printf("input date(year,month,day:)");
        scanf("%d%d%d",&d.year,&d.month,&d.day);
        //检测输入日期的合法性
        if(d.year>0&&(d.month>=1&&d.month<=12)&&(d.day>=1&&d.day<=daytab[leap_y(d.year)][d.month]))
        {
            break;
        }
        else
        {
        printf("InputError!\nInput again!\n");
        }

    }

    //已知公元元年元旦是星期1.计算与公元元年元旦相差的天数
    for(k=1;k<d.year;k++)
    {
        week+=daies[leap_y(k)];
    }
    week+=day_of_year(&d);
    output(&d,week%7);
    return 0;
}