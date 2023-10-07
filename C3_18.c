//求解梅森素数
#include <stdio.h>
int IsPrime(int x)
{
    int y;
    for(y=2;y<=x>>1;y++)
    {
        if(x%y==0)
            return 0;
    }
    return 1;
}

int main()
{
    int a=0,m=0,c=0;
    printf("Please input a number,wo hui gei ni shuchu budayu suo you meishensushu:");
    scanf("%d",&m); 
      // a=2^c-1  a,c均为素数
    for(c=2;a<=m;c++)
    {a=(1<<c)-1;
    if(IsPrime(c)==1&&IsPrime(a)==1)
        printf("%dand%d\n",a,c);
    }
    
    return 0;
}