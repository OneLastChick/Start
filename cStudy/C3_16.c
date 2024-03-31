//输出所有这样的三位数   使 它的平方的末三位  是这个数本身
#include <stdio.h>
int main()
{
    int x,a,b;
    for(x=100;x<1000;x++)
    {
        a=x*x;
        b=a%1000;
        if(b==x)
            printf("All the number is%d And the square is %d\n",x,a);

    }
    return 0;
}