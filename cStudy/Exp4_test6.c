#include <stdio.h>
//fabonacci求和
int main()
{
    int i,k;
    long sum=0;
    long fabonacci(int n);
    printf("Input n:");
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        sum+=fabonacci(i);
        printf("i=%d\tThe sum is %ld\n",i,sum);
    }
    return 0;
    
}
long fabonacci(int n)
{
    if(n==1||n==2)
    {
        return 1;
    }
    else
    {
        return fabonacci(n-1)+fabonacci(n-2);
    }
}