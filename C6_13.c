//高低字节交换
#include <stdio.h>
void swap32(long *data) //利用指针实现Long类型数的最高最低字节交换
{
    char *p=(char *)data;
    char *q=(char *)(data)+sizeof(*data)-1;
    char t;
    t=*p;
    *p=*q;
    *q=t;
}
int main(void)
{
    long a=0x12345678;
    printf("Before swap a=0x%lx\n",a);
    swap32(&a);
    printf("After swap a=0x%lx\n",a);
    return 0;
}