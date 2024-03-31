#include<stdio.h>
int main()
{
    double x,y;
    printf("Please input a real number x,(x>=1 and x<5):");
    scanf("%lf",&x);
    switch((int)x)
    {
        case 1:
            printf("x=%.lf\tY=%.2f\n",x,y=3*x+5);
            break;
        case 2:
            printf("x=%.lf\tY=%.2f\n",x,y=(2+x)+(2+x));
            break;
        case 3:
            printf("x=%.lf\tY=%.2f\n",x,y=1+x+x);
            break;

        case 4:
            printf("x=%.lf\tY=%.2f\n",x,y=x*x-2*x+5);
            break;

        default:
            printf("x=%.lf\terror in input date\n");
            break;

    }
    return 0;
}