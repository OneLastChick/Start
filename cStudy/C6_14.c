//主机字节序转网络字节序
#include <stdio.h>
int checkEndion(void)
{
    short int a=1;
    char *p=(char *)&a;
    return *p;
}
unsigned long BigLittleSwap32(unsigned long a)//实现对长整型a的大小端模式互换
{
    unsigned long x;
    x=(a&0xff000000)>>24;
    x|=(a&0x00ff0000)>>8;
    x|=(a&0x0000ff00)<<8;
    x|=a<<24;
    return x;
}
//将主机字节序转化为网络字节序
unsigned long hton(unsigned long h)
{
    return checkEndion()?BigLittleSwap32(h):h;
}
int main()
{
    unsigned int a=0x12345678;
    unsigned int b=hton(a);
    printf("网络字节序%#x\n",b);
    return 0;
}