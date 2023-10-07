//输出 1~10的阶乘
#include <stdio.h>
int main()
{
    int i,j;
    for(i=1,j=1;i<=10;i++)
    {
        j *= i;
        printf("%d de jie cheng shi:%d\n",i,j);
    }
    return 0;
}