// //判断合数
// #include<stdio.h>
// int main()
// {
//     int i,x,k,flag=0;
//     printf("The program is designed to judge heshu.Please input a number:");
//     while(scanf("%d",&x)!=EOF)
//     {
//         for(i=2,k=x>>1;i<=k;i++)       
//         {
//             if(!x%i)
//             {
//                 flag=1;
//                 break;
//             }
//         }
        
//     }
//     if(flag==1) printf("%d is a heshu\n",x);
//     else printf("%d is not a heshu\n",x);
//     return 0;
// }

//判断合数     //改用单接口结构
//  #include<stdio.h>
// int main()
// {
//     int i,x,k,flag=0;
//     printf("The program is designed to judge heshu.Please input a number:");
//     while(scanf("%d",&x)!=EOF)
//     {
//         for(i=2,k=x>>1;i<=k&&flag!=1;i++)       
//         {
//             if(!x%i)
//             {
//                 flag=1;
//             }
//         }
        
//     }
//     if(flag==1) printf("%d is a heshu\n",x);
//     else printf("%d is not a heshu\n",x);
//     return 0;
// }
//改为纯粹合数计算器     暂时为此版本
#include<stdio.h>
int main()
{
    int i,k,flag=0;
    int x=100;
    printf("The program is designed to judge heshu.Please input a number:");
    while(x<1000)
    {
        for(i=2,k=x>>1;i<=k&&flag!=1;i++)       
        {
            if(x%i==0&&(x%10)%i==0&&(x%100)%i==0)
            {
                flag=1;
                printf("%d is a heshu\n",x);
            }
        }
    flag=0;
    x++;
        
    }
    
    return 0;
}