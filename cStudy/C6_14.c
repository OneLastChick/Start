//�����ֽ���ת�����ֽ���
#include <stdio.h>
int checkEndion(void)
{
    short int a=1;
    char *p=(char *)&a;
    return *p;
}
unsigned long BigLittleSwap32(unsigned long a)//ʵ�ֶԳ�����a�Ĵ�С��ģʽ����
{
    unsigned long x;
    x=(a&0xff000000)>>24;
    x|=(a&0x00ff0000)>>8;
    x|=(a&0x0000ff00)<<8;
    x|=a<<24;
    return x;
}
//�������ֽ���ת��Ϊ�����ֽ���
unsigned long hton(unsigned long h)
{
    return checkEndion()?BigLittleSwap32(h):h;
}
int main()
{
    unsigned int a=0x12345678;
    unsigned int b=hton(a);
    printf("�����ֽ���%#x\n",b);
    return 0;
}