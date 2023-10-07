//猴子吃桃
#include <stdio.h>
int main()
{
    int d,x;
    for(d=10,x=1;d>1;d--)
        x=(x+1)<<1;
    printf("x=%d\n",x);
    return 0;
}