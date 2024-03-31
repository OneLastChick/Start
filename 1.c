// #include <stdio.h>

// void fun(const char* str) {
//     printf("%s", str);
// }

// int main() {
//     fun("HelloWorld");
//     return 0;
// }
#include <stdio.h>

// void print_first_param(int param) {
//     __asm__(
//         "movl %0, %%eax\n\t"    // 将第一个参数移动到 eax 寄存器
//         "movl %%eax, %0"        // 将 eax 寄存器的值移回 param 变量
//         : "=r" (param)          // 输出操作数：param 变量
//         : "0" (param)           // 输入操作数：param 变量
//         : "%eax"                // 使用的寄存器
//     );
//     printf("The first parameter is: %d\n", param);
// }

int main() {
    printf("HlloWorld\n");
    return 0;
}

