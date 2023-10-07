//比拼酒量     题目: x1<20   x1=   x2=  x3=  x4=  x5=0   ??? 
// 1/x1+1/x2+1/x3+1/x4
#include <stdio.h>
int main()
{
    int x1,x2,x3,x4;
for(x1=20;x1>=5;x1--)
{
    for(x2=2;x2<x1;x2++)
    {
        for(x3=2;x3<x2;x3++)
        {
            for(x4=2;x4<x3;x4++)
                {
                    if(1.0/x1+1.0/x2+1.0/x3+1.0/x4==1)
                    printf("x1=%d x2=%d x3=%d x4=%d\n",x1,x2,x3,x4);
                }
        }
    }
}
    return 0;
}