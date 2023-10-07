#include<stdio.h>  //用于统计字符串中的十六进制数字字符的个数
int main()
{
    int i,j;
    char s[100];
    printf("Please input a string:\n");
    fgets(s,100,stdin);
    j=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='0'&&s[i]<='9')
            j++;
        if(s[i]>='a'&&s[i]<='f')
            j++;
        if(s[i]>='A'&&s[i]<='F')
            j++;
    }
    printf("The number is %d\n",j);
    return 0;
}
