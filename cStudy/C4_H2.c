//设计判定完美数的函数   Requirement:输出10^8以内的完全数
#include <stdio.h>
long long isPerfectNumber(long long n)
{
    long long sum =1;
    for(long long i=2;i*i<=n;i++)
        if(n%i==0)
        {
            sum +=i;
            if(i!=n/i)
            {
                sum += n/i;   //如果i是的 那么 n/i 必然也是因子  不过不能取相同的
            }
        }
    if(sum==n)
    {
        return sum;
    }
    else
        return 0;
}
int main()
{
    long long limit = 100000000;   //输出的数据
    printf("PerfectNumber within 10^8:\n");
    for(long long n=2;n<=limit;n++)
    {
        long long result = isPerfectNumber(n);
        if(result)
        {
            printf("%lld=",n);
            for(long long i=1;i<= n/2 ; i++)
                if(n%i==0)
                {
                    printf("%lld",i);
                    if(i!=n/2&&n!=i) //防止最后一个数
                    {
                        printf("+");
                    }
                }
            printf("\n");

        }
     }
    return 0;
    
  
}


// void isPerfectNumber(int n) {
//     int sum = 1; // 初始化sum为1，因为1是所有正整数的真因子之和

//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0) {
//             sum += i; // 将因子i加入真因子之和
//             if (i != n / i) {
//                 sum += n / i; // 如果i不等于n/i，将n/i也加入真因子之和
//             }
//         }
//     }
    
//     if (sum == n) {
//         printf("%d: 1", n);
        
//         for (int i = 2; i <= n / 2; i++) {
//             if (n % i == 0) {
//                 printf(" + %d", i); // 输出真因子
//             }
//         }
        
//         printf(" = %d\n", n); // 输出真因子之和
//     }
// }
//
//
// 
// Output : PerfectNumber within 10^8:
// 6=1+2+3
// 28=1+2+4+7+14
// 496=1+2+4+8+16+31+62+124+248
// 8128=1+2+4+8+16+32+64+127+254+508+1016+2032+4064
// 33550336=1+2+4+8+16+32+64+128+256+512+1024+2048+4096+8191+16382+32764+65528+131056+262112+524224+1048448+2096896+4193792+8387584+16775168