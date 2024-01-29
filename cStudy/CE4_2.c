#include <stdio.h>
void perfectnumber(int i)
{
    int sum=0;
    for(int j=1;j<i;j++)
    {
        if(i%j==0)
        {
            sum+=j;
        }
    }
    if(sum==i)            //判断是否为完美数
        {
            printf("%d=1",i);
            for(int x=2;x<i;x++)
            {
                if(i%x==0)
                {
                    printf("+%d",x);
                }
            }
            printf("\n");
            
        }
}
int main()
{
    for(int i=4;i<=10000;i++)
    {
        perfectnumber(i);
        
    }
    return 0;
}