#include <stdio.h>
#include <math.h>
#define s(a,b,c) (a+b+c)/2
#define area(a,b,c,temp) sqrt(temp*(temp-a)*(temp-b)*(temp-c))
int main()
{
    float s=0.0;
    float area=0.0;
    float a,b,c;
    float temp;
    float result;
    scanf("%f %f %f",&a,&b,&c);
    temp=s(a,b,c);
    result=area(a,b,c,temp);
    printf("s=%.2f\n",temp);
    printf("area=%.2f",result);
    return 0;
}