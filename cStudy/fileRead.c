#include <stdio.h>
#include <stdlib.h>
void input_save(const char* filename)
{
    char ch;
    FILE*fp;
    if((fp=fopen(filename,"w"))==NULL)
    {
        printf("cant open file\n");
        exit(-1);
    }
    while((ch=getchar())!='\n')
    {
        fputc(ch,fp);
    }
    fclose(fp);
}
void read_display(const char* filename)
{
    FILE *fp;
    char ch;
    if((fp=fopen(filename,"r"))==NULL)
    {
        printf("cant open file\n");
        exit(-1);
    }
    while((ch=fgetc(fp))!=EOF)
    {
        putchar(ch);
    }
    fclose(fp);
}
int main(void)
{
    // input_save("test1.txt");
    // read_display("test1.txt");
    FILE *fp;
    char *filename="test2.txt";
    char *str="Hi,Huster!\nWelcome!\n";
    char ch[50];
    if((fp=fopen(filename,"w"))==NULL)
    {
        printf("cant open file!\n");
        exit(-1);
    }
    fputs(str,fp);
    fclose(fp);
    if((fp=fopen(filename,"r"))==NULL)
    {
        printf("cant open the file!\n");
        exit(-1);
    }
    while(!feof(fp))
    {
        if(fgets(ch,50,fp)!=NULL)
        {
            printf("%s",ch);
        }
    }
    fclose(fp);
    return 0;
}