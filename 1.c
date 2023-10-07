#include <math.h>
int main()
{

    long x, y;
    int i;
    for (i = 1; i < 10000;i++)
    {
        x = sqrt(i + 100);
        y = sqrt(i + 268);
        if(x * x==i+100 && y * y == i + 268)
                printf("\n%d", i);
    }
        return 0;
}
