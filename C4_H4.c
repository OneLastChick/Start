//利用带参数的宏计算三角形面积
#include <stdio.h>
#define CALC_S(a,b,c) ((a+b+c)/2.0)
#define CALC_AREA(a,b,c) (sqrt(CALC_S(a,b,c)*(CALC_S(a,b,c)-a)*(CALC_S(a,b,c)-b)*(CALC_S(a,b,c)-c)))
int main()
{
    double a,b,c;
    printf("Please a,b,c:\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    double s = CALC_S(a,b,c);
    double area = CALC_AREA(a,b,c);
    printf("The tangle area is %lf\n",area);
    return 0;


}