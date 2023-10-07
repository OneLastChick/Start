#include<stdio.h>
float func(float x,float y)
{
    return (x+y)/2;
}
int main()
{
    float x,y;
    scanf("%f %f",&x,&y);
    printf("averge of x and y is %f\n",func(x,y));
    return 0;
}                                                                                                     