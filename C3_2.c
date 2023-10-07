#include <stdio.h>  //输入一个大于2的整数   并判断该数是否是素数   并输出相应的结果
int main()
{
    int i,n,j;
    printf("I will help judge the prime with the range of 0 to your input\n");
    scanf("Your input:%d",&j);
    for(n=0;n<=j;n++)
    {
        for(i=2;i<n;i++)
            if(!(n%i))
            {
                printf("%d isnt a prime\n",n);
            }
            printf("%d is a prime\n",n);
    }
    
    return 0;
}