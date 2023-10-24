// #include <stdio.h>
 
// long F(int n) {
//     if(n==1||n==2)
//     {
//         return 1;
//     }
//     else
//     {
//         long a = 1 , b = 1 , c = 0;
//         for(int i=3;i<= n; i++)
//         {
//             c = a + b;
//             a = b;
//             b = c;
//         }
//         return c;
//     }
// }

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printf("%ld",F(n));
//     return 0;
// }
#include <stdio.h>
#include <time.h>

long F(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        long a = 1, b = 1, c = 0;
        for (int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    clock_t start = clock();
    long result = F(n);
    clock_t end = clock();

    double cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("F(%d) = %ld, 耗时: %f 秒\n", n, result, cpu_time_used);

    return 0;
}
