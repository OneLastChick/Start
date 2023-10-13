//从源字符串s中最多取n个字符添加到目的字符串t的尾部
#include <stdio.h> 
void strncate(char t[],char s[],int n)
{
    int i=0,j=0;
    while(t[i]!='\0')
    {
        i++;   //第一步  扫描串t  下标i定位到串t的结尾'\0' 
    }
    while(n--&&(t[i]=s[j])!='\0')
    {
        if(t[i])
        {
            t[i+1]='\0';
        }
        i++;
        j++;

    }
}
int main()
{
    char str1[50]="Hello",str2[]="World!";
    strncate(str1,str2,3);
    puts(str1);
    return 0;
}