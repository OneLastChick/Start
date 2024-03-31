#include <stdio.h>
//检测机器的大小端
//大端:较高的字节存放在较地的存储器地址
//小段:较高的字节存放在较低的存储器地址，较低的字节存放在较高的存储器地址
int checkEndion(void);
int main()
{
    if(checkEndion()==1)
    {
        printf("little-endian");
    }
    else
    {
        printf("big-endian");
    }
    return 0;
}
//利用指针检测机器的大小端模式
int checkEndion()
{
    short int a=1;
    char * p=(char *)&a;
    return *p;
}