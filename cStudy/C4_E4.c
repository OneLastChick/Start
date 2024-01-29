//sum fabonacci
#include <stdio.h>
long long memo[100];  //采取记忆化递归 优化运行效率
long long fabonacci(int n)
{
    if(n==1||n==2)
        return 1;
    else if (memo[n]!=0) return memo[n];
    else {
        memo[n]=fabonacci(n-1)+fabonacci(n-2);
        return memo[n];
    }
        
}
int main()
{
    int i,k;
    long long sum=0;
    printf("Input n:");
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        sum += fabonacci(i);
    }
    printf("i=%d\t  the sum is %lld",i,sum);
    return 0;
}