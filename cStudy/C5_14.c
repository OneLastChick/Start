//输入若干行文本，输出其中最长的那一行
//定义一个getline函数 读入字符串并存储到字符数组中，并返回读入文本行的长度
#include <stdio.h>
#define MAXLINE 100 //最长输入行的大小
int getline(char[],int maxline);
void copy(char t[],char s[]);
int main()
{
    int len;                        //当前行的长度
    int max;                        //当前为止的最大行长度
    char line[MAXLINE];             //存储当前输入行
    char longest[MAXLINE];          //存储最长行
    max=0;
    printf("Input lines,end of ctrl+z\n");
    while((len=getline(line,MAXLINE))>0)
    {
        if(len>max)
        {
            max=len;
            copy(longest,line);
        }
        if(max>0) 
        {printf("longest line :%s\n",longest);}
    }
    return 0;
}
int getline(char s[],int lim)
{
    int c,i;
    i=0;
    while(i<lim-1&&(c=getchar())!=EOF&&c!='\n')
        s[i++]=c;
    if(c=='\n') s[i++]=c;
    s[i]='\0';
    return i;
}
void copy(char t[],char s[])
{
    int i=0;
    while((t[i]=s[i++])!='\0');
}