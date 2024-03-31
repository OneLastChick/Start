//E4-2 利用宏计算平方差  交换两数
#include <stdio.h>
#define DIF (a-b)
#define SUM (a+b)  //Edit 1: SUM*DIF ~ a+b*a-b 宏替换用括号起来防止语义错误
#define SWAP(a,b) a=a+b,b=a-b,a=a-b //Edit 2 :错误的替换方式
int main()
{
    int a,b;
    printf("Input two integers a,b:");
    scanf("%d%d",&a,&b);
    printf("\nSUM=%d\nThe differences between squre of a and square of b is %d",SUM,SUM*DIF);
    SWAP(a,b);
    printf("\nNow a=%d,b=%d\n",a,b);
    return 0;
}