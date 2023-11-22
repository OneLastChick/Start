// //利用R计算面积
// #include <stdio.h>
// #include <assert.h>
// #define R
// int integer_fraction(float x);
// int main()
// {
//     float r,s;
//     int s_integer=0;
//     printf("Input a number:");
//     scanf("%f",&r);
//     #ifdef R
//         s=3.14159*r*r;
//         printf("Area of round is %f\n",s);
//         s_integer=integer_fraction(s);
//         assert((s-s_integer)<0.5);
//         printf("The integer fraction of area is %d\n",s_integer);
//     #endif
//     return 0;
        
// }
// int integer_fraction(float x)
// {
//     int i=x;
//     return i;
// }
#include <stdio.h>
#include <assert.h>
#include <math.h> // 包含 round 函数的头文件

int integer_fraction(float x); // 声明 integer_fraction 函数

int main(void)
{
    float r, s;
    int s_integer = 0;
    printf("Input a number: ");
    scanf("%f", &r);

    s = 3.14159 * r * r;
    printf("Area of round is: %f\n", s);
    s_integer = (int)round(s); // 使用 round 函数四舍五入
    printf("The integer fraction of area is %d\n", s_integer);
    return 0;
}

int integer_fraction(float x)
{
    int i = (int)x;
    return i;
}
