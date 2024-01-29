#include <stdio.h>
void strReverse(char s[]);
int strLength(char s[]);
int main()
{
    char s[1000];
    printf("Please input a string");
    scanf("%s",s);
    printf("String%s'length:%d\n",s,strLength(s));
    strReverse(s);
    printf("After reverse:%s\n",s);
    return 0;
}

int strLength(char s[])
{
    int i=0;
    while(s[i++]);
    return i-1;
}

void strReverse(char s[])
{
    int i,j;
    for(i=0,j=strLength(s)-1;i<j;i++,j--)
    {
        char t;
        t=s[i];
        s[i]=s[j];
        s[j]=t;
    }
}