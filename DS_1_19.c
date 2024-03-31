#include <stdio.h>
#include <stdlib.h>
#define MAXINT 65535
#define Size 100
#define Error 0
//计算i!*2^i 的值并且存到array里面
int main()
{
    int i,k;
    int array[Size];
    scanf("%d",&k);
    if (k>Size)
    {
        printf("超出数组大小");
        exit(Error);
    }
    for(i=0;i<k;i++)
    {
        if(i==0)
        {
            array[i]=1;
            printf("%d ",array[i]);
            continue;
        }
        array[i]=array[i-1]*2*i;
        printf("%d ",array[i]);
        if(array[i]>MAXINT)
        {
            printf("数值溢出");
            exit(Error);
        }4e1837FC36d0639854781204c40
    return 0;
}