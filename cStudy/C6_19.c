//�ַ�������
//�Ӽ����������ɸ��ַ�����ÿ���ַ����Ի��з�����
//����Щ�ַ���������������������ÿ���ַ���ռ��һ��
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLINES 10
#define MAXLEN 80
//��ָ������sָ���size���ַ���������������
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
//��ȡÿ���ַ���,������ָ������plineָ��Ŀռ䣬����ʵ�ʵ�������������-1
int readlines(char *pline[],int maxlines)
{
    int nlines=0;
    char temp[MAXLEN];
    for(int i=0;i<maxlines&&gets(temp);i++) //����ȡmaxlines�У���ֹ�ַ����������
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

//���ָ��plineָ���nlines���ַ���
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
    printf("�����ַ�����һ��һ���ַ�������ctrl+z����\n");
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