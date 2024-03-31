//存粹合数判断器
#include <stdio.h>
int isHeshu(int x)
{
    int k=x/2;
    int flag=0;
    for(int i=2;i<=k;i++)
    {
        if(!(x%i))
        {
            flag=1;
            break;
        }
    }
   return flag;   
}
int main()
{
    int i,flag=0;
    for(int i=100;i<1000;i++)
    {
        if(isHeshu(i)&&isHeshu(i/10)&&isHeshu(i%100))
        {
            printf("PureHeshu:%d\n",i);
        }
    }
    
    return 0;
    
}