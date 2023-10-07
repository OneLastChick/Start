//判断一个数是否是伞数
#include<stdio.h>
int main()
{
    int x,a,b,c;   //x=abc a是百位 b是十位
    printf("Please input a number:\n");
    scanf("%d",&x);
    if(x<100||x>999)
    {
        printf("Your input is error\n");
        return -1;
    }
    a=x/100;
    b=x/10%10;
    c=x%10;
    if(b>a&&b>c)
    {
        printf("%5d is a  shanshu",x);
    }
    return 0;
}