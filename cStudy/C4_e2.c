//用宏来计算平方差
#include <stdio.h>
#define SUM a+b
#define DIF a-b
#define SWAP(a,b) temp=a,a=b,b=temp
int main()
{
    int a,b,temp;
    printf("Input two integers a,b:");
    scanf("%d%d",&a,&b);
    printf("\nSUM=%d\nthe difference between square of a and square of a and square of b is %d\n",SUM,(SUM)*(DIF));
    SWAP(a,b);
    printf("\nNow a = %d b= %d",a,b);
    return 0;
}