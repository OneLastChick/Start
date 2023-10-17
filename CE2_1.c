//输入字符ｃ，如果ｃ是大写字母，则将ｃ转换成对应的小写，否则ｃ的值不变。要求①用条件表达式；②字符的输入输出用getchar和putchar函数。程序应能循环接收用户多个字符的连续输入，直至输入Ctrl+Z程序结束。
#include <stdio.h>
int main()
{
    char c;
    while((c=getchar())!=EOF)
    {
        putchar((c>='A'&&c<='Z')?(c-'A'+'a'):c);
    }
    return 0;
}