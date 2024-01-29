#include <stdio.h>
#define MAXLINES 4
#define MAXLEN 100
char *s[MAXLINES];
//利用一维数组，引入一个指针数组存储每行的起始位置，减少空间的冗余
//最多读入maxlines行字符串到一维数组lines中返回实际读入的行数，出错返回-1
void strsort(char *s[],int size)
{
    char *temp;
    int i,j;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(strcmp(s[j],s[j+1])>0)
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
}
int readlines(char lines[],int maxlines)
{
    int nlines=0;
    char *p=lines;
    for(int i=0;i<maxlines&&gets(p);i++)
    {
        s[i]=p;
        while(*p++!='\0');
        nlines++;
    }
    return nlines;
}
//输出指针pline指向的nlines个字符串
void writelines(char *pline[],int nlines)
{
    while(nlines-->0)
    {
        printf("%s\n",*pline++);
    }

}
int main()
{
    int nlines;
    char lines[MAXLEN];
    nlines=readlines(lines,MAXLINES);
    if(nlines>=0)
    {
        strsort(s,nlines);
        writelines(s,nlines);
        return 0;
    }
    printf("\nError!");
    return -1;
}