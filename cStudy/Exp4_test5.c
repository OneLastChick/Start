//E4-4 求三个数中的最大数
//利用宏替换
int max(int x,int y,int z);
float sum(float x,float y);
#include <stdio.h>
#define MAX(a,b,c) (a>b&&a>c)?a:(b>c)?b:c
int main()
{
    int a,b,c;
    float d,e;
    printf("Input three integers:");
    scanf("%d %d %d",&a,&b,&c);
    printf("\nThe maximum of them is %d\n",MAX(a,b,c));
    printf("Input two floating point numbers:\n");
    scanf("%f %f",&d,&e);
    printf("\nThe sum of the is %f\n",sum(d,e));
    return 0;
}
int max(int x,int y,int z)
{
    int m=z;
    if(x>y)
    {
        if(x>z)
        {
            m=x;
        }
    }
    else
    {
        if(y>z)
        {
            m=y;
        }
    }
    return m;
}
float sum(float x,float y)
{
    return x+y;
}