#include<stdio.h>  //将输入一个数 转为二进制码 并向左移动 n位
#include <stdlib.h>
char *intToBinaryString(int n) 
{
    char *binary = (char *)malloc(33); // 32位二进制加上终止空字符
    if (!binary) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    for (int i = 31; i >= 0; i--) {
        binary[31 - i] = (n & (1 << i)) ? '1' : '0';
    }
    binary[32] = '\0';

    return binary;
}                                                                                                                                                                                                                           
int main()
{
    int x=0,n=0;
    printf("Please input a number and move it\n");
    scanf("%d%d",&x,&n);
    char *binaryString = intToBinaryString(x);
    printf("Origin:%s",binaryString);
    x = x<<n|(unsigned)x>>sizeof(int)*8-n;
    printf("After:%s",intToBinaryString(x));

    return 0;
}