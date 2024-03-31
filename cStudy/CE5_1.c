#include <stdio.h>
int main()
{
    int a=0;
    scanf("%d",&a);
    char binary[33]={0};
    int count=1;
    // //处理正整数
    // if(a>=0)
    // {
    //     for(int j=0;j<32;j++)
    //     {
    //         binary[j]='0';          //初始化数组
    //     }
    //     while(a!=0)
    //     {
    //         binary[32-count++]=(a%2)+'0';
    //         a=a/2;
    //     }
    //     for(int i=0;i<32;i++)
    //     {
    //         printf("%c",binary[i]);
    //     }
    // }
    // //处理负数
    // else
    // {
    //     for(int j=0;j<32;j++)
    //     {
    //         binary[j]='1';          //初始化数组
    //     }
    // }
    for(int i=0;i<32;i++)
    {
        binary[31-i]=(a&(1<<i))?'1':'0';
    }
    binary[32]='\0';
    //输出二进制
    printf("%s",binary);
    return 0;
}