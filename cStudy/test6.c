#include <stdio.h>
#define PI 3.14159  //Edit1: 宏替换 不加分号
int main()
{
    int f;
    short p , k;       //Edit7 :??不理解为什么改为unsigned short才能输出正确结果
    double c,r,s;
//task1
    printf("Input Fahrenheit:");
    scanf("%d",&f);   //Edit2:  f前加&才能将值传入f中
    c= 5.0/9 * (f-32);   //Edit3：5/9 计算时小数部分舍去，结果为0  改为5.0/9 
    printf("\n%d(F)=%.2f(C)\n\n",f,c);
//task2
    printf("input the radius r:");
    scanf("%lf",&r);  //Edit5；double类型使用%lf格式化输入
    s=PI*r*r;
    printf("\nThe acreage is %.2f\n\n",s); //Edit4：print 使用变量名字 &删除
//task3
    k=0xa1b2,p=0x8432;
    short newint;    //Edit6:缺少声明newint 
    newint =p&0xff00|(k&0xff00)>>8; 
    printf("new int = %#hx\n\n",newint);  //short类型 用%hx输出
    return 0;
}
// #include <stdio.h>
// #define PI 3.14159

// int main(void) {
//     int f;
//     short p, k, newint;
//     double c, r, s;

//     /* 任务 1 */
//     printf("Input Fahrenheit: ");
//     scanf("%d", &f); // Use %d for integers and & to store the input value in 'f'
//     c = 5.0 / 9.0 * (f - 32); // Use floating-point division
//     printf("\n%d (F) = %.2f (C)\n\n", f, c);

//     /* 任务 2 */
//     printf("Input the radius r: ");
//     scanf("%lf", &r); // Use %lf for double, and store the input value in 'r'
//     s = PI * r * r;
//     printf("The area is %.2f\n\n", s);

//     /* 任务 3 */
//     k = 0xa1b2;
//     p = 0x8432;
//     newint = (p & 0xff00 ) | (k >> 8); // Shift and bitwise OR
//     printf("new int = %#hx\n\n", newint);

//     return 0;
// }
