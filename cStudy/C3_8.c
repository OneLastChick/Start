//将输入正文中的横向制表符换成空格符输出
#include <stdio.h>
#define TAB 8
int main()
{
    int nb;
    int pos;
    char ch;
    for(pos=0;(ch=getchar())!=EOF;)
        switch(ch)
        {
            case '\t':
                nb=TAB-pos%TAB;
                pos += nb;
                while(nb--)
                    putchar(' ');
                break;
            case '\n':
                putchar(ch);
                pos=0;
                break;
            default:
                putchar(ch);
                pos++;
        }
    return 0;
}