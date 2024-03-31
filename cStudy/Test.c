#include <stdio.h>
//输入无符号短整数k，输出将k的高4位和低四位交换后的结果。
int main(void)
{
    unsigned short k; //定义无符号短整型数k
    scanf("%u", &k);
    k = ((k >> 12) & 0x000f) | ((k << 12) & 0xf000) | (k & 0x0ff0);
    printf("%u", k);
    return 0;
}
