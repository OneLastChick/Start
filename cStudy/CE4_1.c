// #include <stdio.h>
// int isprime(int x)
// {
//     if(x<=1)
//     {
//         return 0;
//     }
//     else{
//         for(int i=2;i < x;i++)
//         {
//             if(x%i==0)
//             {
//              return 0;
//             }
//         }
//     
//     return 1;
// }
// }
// void confirmbahe(int n)
// {
//     for(int i1=2,i2=n-i1;i1>2/n;i1++)
//     {
//         if(isprime(i1)&&isprime(i2))
//         {
//             printf("%d=%d+%d\n",n,i1,i2);
//         }
//     }
// }

// int main()
// {
//     int n;
//     while((scanf("%d",&n))!=EOF)
//     {
//         if(n%2==0 && n>=4)
//         {
//             confirmbahe(n);
//         }
//         else
//             break;
//     }
//     return 0;
// }
#include <stdio.h>

int prime(int x) {
    if (x <= 1) {
        return 0;
    }
    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            return 0;  // 不是素数
        }
    }
    return 1;  // 是素数
}

void confirmbahe(int n) {
    for (int i1 = 2; i1 <= n / 2; i1++) {
        int i2 = n - i1;
        if (prime(i1) && prime(i2)) {
            printf("%d=%d+%d\n", n, i1, i2);
            return;
        }
    }
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        if (n % 2 == 0 && n >= 4) {
            confirmbahe(n);
        }
        else
        {
            break;
        }
    }
    return 0;
}
