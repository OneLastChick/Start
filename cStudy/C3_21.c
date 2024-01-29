//牛顿迭代法求方程
#include <stdio.h>
#include <math.h>

double funY(double x);
double funY1(double x);

int main() {
    double x, x1, x2;

    x1 = 1.0;//求1.0附近的根
    x2 = x1 - funY(x1) / funY1(x1);
    while (fabs(x2 - x1) > 1e-6) {
        x1 = x2;
        x2 = x2 = x1 - funY(x1) / funY1(x1);
    }
    printf("%f",x2);
}
//————————————————————
//  y的函数
double funY(double x) {
    double y;
    y = 3 * x*x*x - 4 * x*x - 5 * x + 13;
    return y;
}
//y的一阶导数
double funY1(double x) {
    double y1;
    y1 = 9 * x*x - 8 * x - 5;
    return y1;
}
