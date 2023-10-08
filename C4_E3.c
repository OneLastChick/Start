#include <stdio.h>
int max(int x,int y,int z)
{
    int m=z;
    if(x>y)
        {if(x>z)  m=x;}

    else if(y>z) m=y;
    return m;
}

float sum(float x,float y)
{
    return  x+y;
}
int main()
{
    int a,b,c;
    float d,e;
    printf("Input three integers:");
    scanf("%d%d%d",&a,&b,&c);
    printf("The maximum of them is %d\n",max(b,a,c));
    printf("Input two floating point numbers:");
    scanf("%f%f",&d,&e);
    printf("The sum of two floating point numbers is %f",sum(d,e));
    return 0;
}
