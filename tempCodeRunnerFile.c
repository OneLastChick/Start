//sum fabonacci
#include <stdio.h>
long fabonacci(int n)
{
    if(n==1||n==2)
        return 1;
    else 
        return fabonacci(n-1)+fabonacci(n-2);
}
int main()
{
    int i,k;
    long sum=0;
    printf("Input n:");
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        sum += fabonacci(i);
    }
    printf("i=%d\t  the sum is %ld",i,sum);
    return 0;
}