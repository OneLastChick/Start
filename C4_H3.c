//求自幂数   n位数  每个位上数字的n次幂之和等于它本身
#include <stdio.h>
#include <math.h>
int iszimishu(int num,int k)
{
    int originalNum = num;
    int sum=0;
    while(num>0)
    {
        int n = num % 10;  //n是每个位的数字
        sum += pow(n,k);
        num /= 10;
    }
    return sum == originalNum;
}
int main()
{
    int k;
    printf("Please input a number:)(BUT NO MORE THAN EIGHT)\n");
    scanf("%d",&k);
    if(k<1)
    {
        printf("WeiShuMust>=1\n");
        return 1;
    }
    printf("%dwei de zimishu you:\n",k);
    int lowerBound = pow(10,k-1); //学习
    int upperBound = pow(10,k)-1;
    int count = 0;
    
    for(int num=lowerBound;num<=upperBound;num++)
    {
        if(iszimishu(num,k))
        {
            printf("%d\n",num);
            count++;
        }
    }
    printf("Gong %d ge",count);
    return 0;
}