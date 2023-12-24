#include "stdio.h"
char *strcpy(char *,char *);
int main(void)
{
    char a[20],b[60]="there is a boat on the lake.";
    strcpy(a,b);
    printf("%s\n",a);
    return 0 ;
}
char *strcpy(char *s,char *t)
{
    while(*s++=*t++);
    return (s);
}
