//合数判断器
#include <stdio.h>
int main()
{
    int i,x,k,flag=0;
    printf("Judge Heshu.Input an integer,end:Ctrl+Z\n");
    while(scanf("%d",&x)!=EOF)
    for(i=2,k=x>>1;i<=k;i++)    //Edit4:边界条件判断错误
    {
        if(!(x%i))           //Edit2 ： 优先级 ！ 高于 % 逻辑错误
        {
            flag=1;
            break;        //改成单出口 把break删掉即可
        }
    }
    if(flag==1)            //Edit 1: 修改为判断符
    {
        printf("%d is Heshu",x);
    }
    else
    {
        printf("%d is not Heshu",x);
    }
    return 0;
    
}