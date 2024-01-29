//输入正文复制到输出  并删去每个输入行的前置空格
#include <stdio.h>
int main()
{
    char ch;
    int flag=1;
    printf("input text:\n");
    while((ch=getchar())!=EOF)
    {
        if(flag&&(ch==' '||ch=='\t'))
            continue;
        putchar(ch);
        if(ch=='\n')
            flag=1;
        else flag=0;
    }

    return 0;
}