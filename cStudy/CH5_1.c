#include <stdio.h>
void hailstone(int n)
{
    int count=0;
    while(1)
    {
        if(count%6==0&&count!=0)
        {
            printf("\n");
        }
        if(n%2==0)
        {
            count++;
            printf("%4d",n);
            n = n / 2;
            continue;
        }
        if(n%2!=0&&n!=1)
        {
            count++;
            printf("%4d",n);
            n = 3 * n + 1;
            continue;
        }
        if(n==1)
        {
            count++;
            printf("%4d\n",n);
            break;
        }

    }
    printf("Number of hailstone generated: %d",count);
}
int main()
{
    int n=0;
    scanf("%d",&n);
    printf("Hailstone generated by %d:\n",n);
    hailstone(n);
    return 0;
}