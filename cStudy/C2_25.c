//数据加密
#include <stdio.h>                 //加密方法:将4字节的字每四位一组重新拼凑
int main()                         //maskx作为逻辑尺
{
    long a,maskx=0xf0f0f0f0,maske=0x0f0f0f00,maskv=0x0f;
    printf("Please input a hex And dont put 0x:\n");
    while (scanf("%lx",&a)==1)   //表示成功读取
    {
        a=(a&maskx)|((a<<8)&maske)|(a>>24)&maskv;           //?有待研究
        printf("%lx\n",a);
    }
    
    return 0;
}