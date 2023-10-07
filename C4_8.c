//可变参数宏的定义和使用
#include <stdio.h>
#define PR(__VA_ARGS_) printf(__VA_ARGS_)
int main()
{
    char name[10];
    int age;
    PR("Pleaseinput your name and age:");
    return 0;
}
