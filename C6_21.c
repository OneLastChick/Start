//字符串连接。编写一个函数strCatenate，从源串s中最多取n个字符添加到t的尾部
#include <stdio.h>
char *strCatenate(char *t,const char *s,int n)
{
    char *p=t;
    while(*p)
    {
        p++;
    }
    while(n--&&(*p++=*s++));
    if(n<0)
    {
        *p='\0';
    }
    return t; //返回目标串t的首地址。
}

int main()
{
    char s1[30]="";
    char *p;
    strCatenate(s1,"Programming",7);
    p=strCatenate(s1,"-language",5);
    printf("%s\n",s1);
    printf("%s\n",p);
    return 0;
}

