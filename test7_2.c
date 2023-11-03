//合数判断器
#include <stdio.h>
int main()
{
    int i,x,k,flag=0;
    printf("Judge Heshu.Input an integer,end:Ctrl+Z\n");
    while(scanf("%d",&x)!=EOF)
    do{                 //改成do-while 循环
        int i=2;
        int k=x<<1;
        if(!(x%i))           
        {
            flag=1;
            break;        
        }
        i++;
    }while(i<=k);
    if(flag==1)            
    {
        printf("%d is Heshu",x);
    }
    else
    {
        printf("%d is not Heshu",x);
    }
    return 0;
    
}