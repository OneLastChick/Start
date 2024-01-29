#include <stdio.h>
void printyanghui(int n)
{
    int j=1;
    int i=0;
    for(i=0;i<=n;i++)
    {
        for(int x=3*n-2*i;x>0;x--) //行首打印空格
        {
            printf(" ");
        }
        int result =1;
        printf("%d   ",result);
        for(j=1;j<=i;j++)
        {
            result=result * (i-j+1) / j ;
            if(result<10&&result>=0)
            {
                printf("%d   ",result);
            }
            if(result>=10&&result<=99)
            {
                printf("%d  ",result);
            }
            if(result>=100&&result<=999)
            {
                printf("%d ",result);
            }
        }
        printf("\n");
    }
    
}
int main()
{
    int i;   //打印n行的杨辉
    scanf("%d",&i);
    printyanghui(i);
    return 0;
}
