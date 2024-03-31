//计算级数S=1+sqrt(2)+...+sqrt(10)
#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    double sum;
    for(i=1;i<=10;i++)
        sum += sqrt(i);
    printf("Sum=:%.8f\n",sum);
    return 0;
}