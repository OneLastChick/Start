//字符串排序
//从键盘输入若干个字符串，每个字符串以换行符结束
//对这些字符串进行升序排序后输出，每个字符串占据一行
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLINES 10
#define MAXLEN 80
//对指针数组s指向的size个字符串进行升序排序
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
//读取每行字符串,并放入指针数组pline指向的空间，返回实际的行数，出错返回-1
int readlines(char *pline[],int maxlines)
{
    int nlines=0;
    char temp[MAXLEN];
    for(int i=0;i<maxlines&&gets(temp);i++) //最多读取maxlines行，防止字符串数组溢出
    {
        pline[i]=(char *)malloc(sizeof(strlen(temp))+1);
        if(pline[i]==NULL)
        {
            return -1;
        }
        nlines++;
        strcpy(pline[i],temp);
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
    char *s[MAXLINES];
    printf("输入字符串，一行一个字符串，以ctrl+z结束\n");
    nlines=readlines(s,MAXLINES);
    if(nlines>=0)
    {
        strsort(s,nlines);
        writelines(s,nlines);
        return 0;
    }
    printf("\nError!");
    return -1;
}