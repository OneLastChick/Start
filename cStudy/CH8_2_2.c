#include <stdio.h>
#include <string.h>
#pragma
void mystrncat(char *pa,char *pb)
{
    for(;*pa!='\0';pa++);
    for(;*pb!='\0';pb++,pa++)
    {
        *pa=*pb;
    }
    *pa='\0';
}
int main()
{
    int thenumofchar;
    char a[100];
    char b[100];
    gets(a);
    gets(b);
    int m=strlen(a);
    int n=strlen(b);
    scanf("%d",&thenumofchar);//取n个字符
    mystrncat(a,b);
    if(n<thenumofchar)
    {
        printf("%s",a);
    }
    else
    {
        for(int i=0;i<m+thenumofchar;i++)
        {
            printf("%c",a[i]);
        }
    }
    return 0;
}