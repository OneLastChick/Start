#include <stdio.h>
#include <math.h>
int iszimishu(unsigned long long i,int k)
{
    int sum=0;
    unsigned long long n=i;
    while(i>0)
    {
        int c=i%10;
        i/=10;
        sum+=pow(c,k);
    }
    if(sum==n)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    int k=1;
    
    while(k!=0)
    {
        scanf("%d",&k);
        int count=0;
        for(unsigned long long i=pow(10,k-1);i<pow(10,k);i++)
        {
            if(iszimishu(i,k))
            {
                count++;
            }
        }
        if(k>0){ if(k==3)printf("%d位的水仙花数共有%d个",k,count);
                  if(k==4)printf("%d位的四叶玫瑰数共有%d个",k,count);
                  if(k==5)printf("%d位的五角星数共有%d个",k,count);
                  if(k==6)printf("%d位的六合数共有%d个",k,count);
                  if(k==7)printf("%d位的北斗星数共有%d个",k,count);
                  if(k==8)printf("%d位的八仙数共有%d个",k,count);
                
                
        for(unsigned long long i=pow(10,k-1);i<pow(10,k);i++)
        {
            if(iszimishu(i,k))
            {
                count--;
                printf("%llu",i);
                if(count>0)
                {
                    printf(",");
                }
            }
        }
        }
        printf("\n");
    }
}
