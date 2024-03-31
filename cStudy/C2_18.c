//字符串反转   输入一个字符串s  反转后输出
#include<stdio.h>
int main()
{
    int i,j=0;
    char s[1000],t;
    printf("请 input a string\n");
    fgets(s,1000,stdin);
    while(s[j]!='\0')
    {
        j++;
    }
    j--;
    for(i=0;i<j;i++,j--)
    {
        t=s[i];
        s[i]=s[j];
        s[j]=t;
    }
    printf("After reverse:%s",s);
    return 0;
}