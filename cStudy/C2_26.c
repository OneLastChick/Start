//整数的16进制显示  定义函数PrintHex(intx)
#include <stdio.h>
void PrintHex(int x)
{
    int i,t,leadzero=1;
    int n=sizeof(int)*2;
    int mask=0x0f;
    for(i=1;i<=n;i++)
    {
        t=(x>>(n-i)*4)&mask;
        if(t||!leadzero)
        {
            leadzero=0;
            t=t<10?t+'0':t+'a'-10;
            putchar(t);
        }
    }

}
int main()
{
    int a=0;
    printf("Please input a number And i will convert it to hex:\n");
    scanf("%d",&a);
    PrintHex(a);
    printf("%x\n",a);
    return 0;
}