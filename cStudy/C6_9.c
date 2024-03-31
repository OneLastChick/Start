//用指针实现文本单词倒置
#include <stdio.h>
int reverse(void);
int GetWord(char * s);
int main(void)
{
    while(reverse()!=EOF)
    {
        printf("\n");
    }
    return 0;
}
int reverse()
{
    char w[50];
    int c;
    if((c=GetWord(w))!='\n')
    {
        reverse()!=EOF;
    }
    printf("%s ",w);
    return c;
}
int GetWord(char *s)
{
    char c;
    while((c=getchar())!=' '&&c!='\t'&&c!='\n'&&c!=EOF)
    {
        *s++=c;
        *s='\0';
    }
    return c;
}