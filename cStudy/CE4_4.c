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
        if(k>0){ if(k==3)printf("%dλ��ˮ�ɻ�������%d��",k,count);
                  if(k==4)printf("%dλ����Ҷõ��������%d��",k,count);
                  if(k==5)printf("%dλ�������������%d��",k,count);
                  if(k==6)printf("%dλ������������%d��",k,count);
                  if(k==7)printf("%dλ�ı�����������%d��",k,count);
                  if(k==8)printf("%dλ�İ���������%d��",k,count);
                
                
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
