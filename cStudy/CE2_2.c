
// // #include <stdio.h>

// #include <stdio.h>
// #include <stdint.h>

// // 定义一个宏，用于获取 x 的第 m 位开始向左的 n 位
// // #define GET_BITS(x, m, n) ((x >> m) & ((1 << n) - 1))

// // int main() {
// //     uint16_t x;
// //     int m, n;

// //     // 输入十六进制无符号短整数 x
// //     printf("请输入一个十六进制的无符号短整数 x: ");
// //     if (scanf("%hx", &x) != 1) {
// //         printf("无效输入\n");
// //         return 1;
// //     }

// //     // 输入 m 和 n
// //     printf("请输入 m (0 ≤ m ≤ 15): ");
// //     if (scanf("%d", &m) != 1 || m < 0 || m > 15) {
// //         printf("m 的值无效\n");
// //         return 1;
// //     }

// //     printf("请输入 n (1 ≤ n ≤ %d): ", 16 - m);
// //     if (scanf("%d", &n) != 1 || n < 1 || n > 16 - m) {
// //         printf("n 的值无效\n");
// //         return 1;
// //     }

// //     // 提取并靠齐所需的位
// //     uint16_t result = GET_BITS(x, m, n) << (15 - m);

// //     // 输出结果
// //     printf("结果: 0x%04x\n", result);

// //     return 0;
// // }
// // int main()
// // {
// //     printf("%d",sizeof(unsigned short));
// //     return 0;
// // }
// #include <stdio.h>

// // int main() {
// //     unsigned short x;
// //     int m, n;

// //     // 输入x，m和n
// //     printf("请输入一个十六进制的无符号短整数x: ");
// //     scanf("%hx", &x);
// //     printf("请输入m（0 ≤ m ≤ 15）: ");
// //     scanf("%d", &m);
// //     printf("请输入n（1 ≤ n ≤ %d）: ", 16 - m);
// //     scanf("%d", &n);

// //     // 检查m和n的范围
// //     if (m < 0 || m > 15 || n < 1 || n > (16 - m)) {
// //         printf("m和n的范围不符合要求。\n");
// //         return 1;
// //     }

// //     // 取出指定位数的二进制
// //     unsigned short result = (x >> (15 - m - n + 1)) & ((1 << n) - 1);

// //     // 输出结果
// //     printf("结果为：0x%x\n", result);

// //     return 0;
// // }

// // #include <stdio.h>
// // #include <stdlib.h>

// // // 定义一个函数，用于取出x的二进制下从第m位开始向左的n位，并左移至最高位
// // unsigned short extract(unsigned short x, unsigned short m, unsigned short n) {
// //     // 检查m和n的范围，如果不合法，返回0
// //     if (m > 15 || n > 16 - m || n < 1) {
// //         printf("输入的m或n不合法\n");
// //         return 0;
// //     }
// //     // 用一个掩码mask，将x的第m位至第m+n-1位保留，其余位置为0
// //     unsigned short mask = (1 << n) - 1; // mask的低n位为1，其余为0
// //     mask = mask << (16 - m - n); // 将mask左移至第m位至第m+n-1位
// //     x = x & mask; // 将x与mask按位与，得到x的第m位至第m+n-1位
// //     // 将x左移至最高位
// //     x = x << (m + n - 1);
// //     return x;
// // }

// // int main() {
// //     unsigned short x, m, n; // 定义无符号短整数x, m, n
// //     printf("请输入十六进制的无符号短整数x：\n");
// //     scanf("%hx", &x); // 以十六进制输入x的值
// //     printf("请输入十进制的无符号短整数m和n（0 ≤ m ≤ 15, 1 ≤ n ≤ 16-m）：\n");
// //     scanf("%hu %hu", &m, &n); // 以十进制输入m和n的值
// //     unsigned short result = extract(x, m, n); // 调用extract函数，得到结果
// //     printf("结果是：\n");
// //     printf("%04hx\n", result); // 以十六进制输出结果，不足四位补零
// //     return 0;
// // }

// #include <stdio.h>
// #include <stdlib.h>

// // 定义一个函数，用于取出x的二进制下从第m位开始向左的n位，并使其向左端靠齐
// unsigned short extract(unsigned short x, int m, int n) {
//     // 检查m和n的范围，如果不合法，返回0
//     if (m < 0 || m > 15 || n < 1 || n > 16 - m) {
//         return 0;
//     }
//     // 将x右移m位，得到从第m位开始的n位
//     x = x >> m;
//     // 将x左移16-n位，使其向左端靠齐
//     x = x << (16 - n);
//     // 返回结果
//     return x;
// }

// int main() {
//     // 定义变量x, m, n
//     unsigned short x;
//     int m, n;
//     // 输入x, m, n的值
//     printf("请输入十六进制的无符号短整数x: ");
//     scanf("%hx", &x);
//     printf("请输入十进制的整数m和n: ");
//     scanf("%d%d", &m, &n);
//     // 调用函数extract，得到结果
//     unsigned short result = extract(x, m, n);
//     // 以十六进制输出结果
//     printf("结果是: %04hx\n", result);
//     // 退出程序
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     unsigned short x;
//     int m,n;
//     scanf("%hx %d %d",&x,&m,&n);
//     if(m>=0&&m<=15&&n>=1&&n<=(16-m))
//     {
//         x = x >> m;
//         x = x << (16-n);

        
//         printf("%hx",x);
//     }
//     else
//     {
//         printf("error");
//     }
//     return 0;
// }
#include <stdio.h>
int main()
{
    unsigned short x;
    int m,n;
    scanf("%x %d %d",&x,&m,&n);
    if(m>=0&&m<=15&&n>=1&&n<=(16-m))
    {
        unsigned short mask=0xffff;
        unsigned short result=0;
        mask = mask << n;
        x = x >> m;
        result =(x & (~mask))   <<  (16 -n);
        printf("%x",result);
    }
    return 0;
}
