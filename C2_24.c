//统计一个十六进制整数二进制中1的个数
#include <stdio.h>
int main()
{
    int v,n,t;
    printf("Please input a number.\n");
    while(scanf("%x",&v)==1)
    {
        t=v;
        for(n=0;v!=0;n++)    //也被称为Brian Kernighan's Algorithm。它使用了位操作来高效地统计1的位数。
        {
            v&=(v-1);
        }
        printf("%#x biary 1 number has %d\n",t,n);
    }
    return 0;
}