// //�����׳�  ��������ʵ�ָ߾�������
// #include <stdio.h>
// #define MAX_NUM 1000
// void putBigNum(int *x,int n);
// int factorial(int x,int f[]);

// int main()
// {
//     int n,len,result[MAX_NUM];
//     printf("������һ������:");
//     scanf("%d",&n);
//     len=factorial(n,result);
//     putBigNum(result,len);
//     printf("\n");
// }
// //������Ľ׳ˣ�x������׳˵�������f��ָ�򱣴�׳�ֵ�����飬�������ؽ׳�ֵ��λ��
// int factorial(int x,int *f)
// {
//     int i,k;
//     int width;//�����λ��
//     int carry;
//     *f=1;
//     for(i=0;i<MAX_NUM;i++)
//     {
//         *(f+i)=0;
//     }
//     for(width=1,i=1;i<=x;i++)      //��С������н׳�����
//     {
//         for(carry=0,k=0;k<width;k++)     //��ÿһλ��������
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

// //���һ��xָ���nλ����
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
    printf("������һ������:");
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
    int width = 1; // �����λ��
    *f = 1;
    for (i = 1; i <= x; i++) { // ��С������н׳�����
        int carry = 0;
        for (k = 0; k < width; k++) { // ��ÿһλ��������
            f[k] = f[k] * i + carry;
            carry = f[k] / 10;
            f[k] %= 10;
        }
        while (carry > 0) { // ������ܵĶ����λ
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
