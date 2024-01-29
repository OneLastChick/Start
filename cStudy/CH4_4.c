#include <stdio.h>
int main()
{
    int n;
    int f=0;
    for(int i=1;i<=10;i++)
    {
        scanf("%d",&n);
        if(n>=0&&n<=10000)
        {
            if(n % 7 == 0)
            {
                int temp = n;
                int flag = 0; 

                for(temp=n;temp > 0;temp/=10)
                 {
                    if (temp % 10 == 5) 
                    {
                        flag = 1;
                        f=1;
                        break;
                    }
                }
                if(flag)
                {
                    printf("%d ",n);
                }
            }
        }
        
    }
    if(f==0)
        {
            printf("0");
        }
    
    return 0;
}