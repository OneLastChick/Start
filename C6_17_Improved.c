// //高精度计算，采用将一个大数分为多个四位整数
// #include <stdio.h>
// #define BASE 10000
// #define MAX_NUM 1000
// void putBigNum(int *x,int n);
// int factorial(int x,int f[]);

// int factorial(int x,int *f)
// {
//     int i,k;
//     int width;
//     int carry;
//     *f=1;
//     for(i=0;i<MAX_NUM;i++)
//     {
//         *(f+i)=0;
//     }
//     for(width=1,i=1;i<=x;i++)
//     {
//         for(carry=0,k=0;k<width;k++)
//         {
//             *(f+k)=*(f+k)*i+carry;
//             carry=*(f+k)/BASE;
//             *(f+k)=*(f+k)%BASE;
//         }
//         if(carry)
//         {
//         f[width++]=carry;
//         }
//     }
//     return width;
// }

// void putBigNum(int *x,int n)
// {
//     int *p;
//     char s[5];
//     p=x+n-1;
//     printf("%d",*p);
//     for(--p;p>=x;p--)
//     {
//         printf("%04d",*p);
//     }
// }


// int main()
// {
//     int n,len,result[MAX_NUM];
//     printf("请输入一个整数:");
//     scanf("%d",&n);
//     len=factorial(n,result);
//     putBigNum(result,len);
//     printf("\n");
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define BASE 10000

void putBigNum(int *x, int n);
int *factorial(int x, int *len);

int *factorial(int x, int *len) {
    int i, k;
    int width;
    int carry;
    
    int *f = (int *)malloc(1001 * sizeof(int)); // 动态分配存储空间
    
    f[0] = 1;
    for (i = 1; i <= 1000; i++) {
        f[i] = 0;
    }

    for (width = 1, i = 1; i <= x; i++) {
        for (carry = 0, k = 0; k < width; k++) {
            f[k] = f[k] * i + carry;
            carry = f[k] / BASE;
            f[k] %= BASE;
        }
        if (carry) {
            f[width++] = carry;
        }
    }
    *len = width;
    return f;
}

void putBigNum(int *x, int n) {
    int *p;
    p = x + n - 1;
    printf("%d", *p);
    for (--p; p >= x; p--) {
        printf("%04d", *p);
    }
}

int main() {
    int n, len;
    int *result;
    
    printf("请输入一个整数:");
    scanf("%d", &n);
    clock_t start_time = clock();
    result = factorial(n, &len);
    putBigNum(result, len);
    
    free(result); // 释放动态分配的内存
    clock_t end_time=clock();
    double time_spent=(double)(end_time-start_time)/CLOCKS_PER_SEC;
    printf("\n");
    printf("%f",time_spent);
    return 0;
}
