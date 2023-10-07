#include <stdio.h>
//判断x�?否为完数，是则返�?1 否则返回0
int isPerfect(int x)
{
    int y, s;
    for (s = 0, y = 1; y <= x / 2;y++)
    {
        if(!(x%y))
            s += y;
    }
    if(s==x)
        return 1;
    return 0;
}

int main()
{
    int a;
    printf("��������:\n");
    for (a = 1; a <= 1000;a++)
        if(isPerfect(a))
            printf("%8d",a);
    return 0;
}