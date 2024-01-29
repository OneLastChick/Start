//将指定的文本文件内容在屏幕上显示出来，命令行的格式为 type filename
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
    char ch;
    FILE *fp;
    if(argc!=2)
    {
        printf("Arguments error!\n");
        exit(-1);
    }
    if((fp=freopen(argv[1],"r",stdin))==NULL)
    {
        printf("Cant open %s file!\n",argv[1]);
        exit(-1);
    }
    while((ch=getchar())!=EOF)
    {
        putchar(ch);
    }
    fclose(fp);
    return 0;
}