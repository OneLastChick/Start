// //大数阶乘  利用数组实现高精度运算
// #include <stdio.h>
// #define MAX_NUM 1000
// void putBigNum(int *x,int n);
// int factorial(int x,int f[]);

// int main()
// {
//     int n,len,result[MAX_NUM];
//     printf("请输入一个整数:");
//     scanf("%d",&n);
//     len=factorial(n,result);
//     putBigNum(result,len);
//     printf("\n");
// }
// //求大数的阶乘，x是欲求阶乘的整数，f是指向保存阶乘值的数组，函数返回阶乘值的位数
// int factorial(int x,int *f)
// {
//     int i,k;
//     int width;//结果的位数
//     int carry;
//     *f=1;
//     for(i=0;i<MAX_NUM;i++)
//     {
//         *(f+i)=0;
//     }
//     for(width=1,i=1;i<=x;i++)      //从小到大进行阶乘运算
//     {
//         for(carry=0,k=0;k<width;k++)     //对每一位进行运算
//         {
//             *(f+k)=*(f+k)*i+carry;
//             carry=*(f+k)/10;
//             *(f+k)=*(f+k)%10;
//             if(k==width-1&&carry!=0)
//             {
//                 width++;
//             }
//         }
//     }
//     return width;
// }

// //输出一个x指向的n位大数
// void putBigNum(int *x,int n)
// {
//     int *p;
//     for(p=x+n-1;p>=x;p--)
//     {
//         printf("%d",*p);
//     }
// }
#include <stdio.h>
#include <time.h>
#define MAX_NUM 1000

void putBigNum(int *x, int n);
int factorial(int x, int f[]);

int main() {
    int n, len, result[MAX_NUM];
    printf("请输入一个整数:");
    scanf("%d", &n);
    clock_t start_time = clock();
    len = factorial(n, result);
    putBigNum(result, len);
    clock_t end_time = clock();
    printf("\n");
    double spend = (double)(end_time-start_time)/CLOCKS_PER_SEC;
    printf("%f",spend);
    return 0;
}

int factorial(int x, int *f) {
    int i, k;
    int width = 1; // 结果的位数
    *f = 1;
    for (i = 1; i <= x; i++) { // 从小到大进行阶乘运算
        int carry = 0;
        for (k = 0; k < width; k++) { // 对每一位进行运算
            f[k] = f[k] * i + carry;
            carry = f[k] / 10;
            f[k] %= 10;
        }
        while (carry > 0) { // 处理可能的额外进位
            f[width] = carry % 10;
            carry /= 10;
            width++;
        }
    }
    return width;
}

void putBigNum(int *x, int n) {
    int *p;
    for (p = x + n - 1; p >= x; p--) {
        printf("%d", *p);
    }
}
