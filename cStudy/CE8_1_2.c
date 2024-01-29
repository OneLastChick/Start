#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE*fp1=fopen("input.txt","r");
    FILE*fp2=fopen("output.txt","w");
    char Word1[10],Word2[10];
    fscanf(fp1,"%s %s",Word1,Word2);
    char old[1000];
    char new[1000];  //记录替换后的段落
    int count=0;//记录替换的次数
    fgets(old,1000,fp1);
    //清楚fp1流第一行的空白
    //查找目标单词
    char temp[20];
    while((fscanf(fp1,"%s",temp))!=EOF)
    {
        if(strcmp(Word1,temp)==0)
        {
            fputs(Word2,fp2);
            fputc(' ',fp2);
            count++;
        }
        else
        {
            fputs(temp,fp2);
            fputc(' ',fp2);
        }
    }
    fprintf(fp2,"##%d modified##",count);

    return 0;
}