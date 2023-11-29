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
// #include <stdio.h>
// #include <time.h>

// long F(int n) {
//     if (n == 1 || n == 2) {
//         return 1;
//     } else {
//         long a = 1, b = 1, c = 0;
//         for (int i = 3; i <= n; i++) {
//             c = a + b;
//             a = b;
//             b = c;
//         }
//         return c;
//     }
// }

// int main() {
//     int n;
//     scanf("%d", &n);
//     printf("%d\n",F(n));
//     return 0;
// }
// #include <stdio.h>
// #include <time.h>

// #define MAX 100
// long long memo[MAX];

// long long fib(int n) {
//     if (n <= 1) {
//         return n;
//     }

//     if (memo[n] != -1) {
//         return memo[n];
//     }

//     memo[n] = fib(n - 1) + fib(n - 2);
//     return memo[n];
// }

// int main() {
//     int nums[] = {35, 40, 99};
//     int num_count = sizeof(nums) / sizeof(nums[0]);

//     for (int i = 0; i < MAX; ++i) {
//         memo[i] = -1;
//     }

//     for (int i = 0; i < num_count; ++i) {
//         clock_t start = clock();
//         long long result = fib(nums[i]);
//         clock_t end = clock();
//         double time_spent = ((double)(end - start)) / CLOCKS_PER_SEC;

//         printf("F(%d) = %lld, Time taken: %f seconds\n", nums[i], result, time_spent);
//     }

//     return 0;
// }
#include <stdio.h>
#include <time.h>

long long fib(int n) {
    if (n <= 1) {
        return n;
    }
    
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int nums[] = {35, 40, 45};
    int num_count = sizeof(nums) / sizeof(nums[0]);

    for (int i = 0; i < num_count; ++i) {
        clock_t start = clock();
        long long result = fib(nums[i]);
        clock_t end = clock();
        double time_spent = ((double)(end - start)) / CLOCKS_PER_SEC;

        printf("F(%d) = %lld, Time taken: %f seconds\n", nums[i], result, time_spent);
    }

    return 0;
}

