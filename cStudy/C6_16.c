//字符串比较
//定义函数strncmp 比较两个字符串s和t的前n个字符，如果前n个字符一样返回0，如果串s<串t（即按字典序s在前面则返回负数， 相反则返回正数
#include <stdio.h>
int mystrnncmp(const char *s,const char *t,int n)
{
    for(;n&&*s==*t;s++,t++,n--)
    {
        if(*s=='\0')
        {
            return 0;
        }
       
    }
    if(n>0)
        {
            return *s-*t;
        }
    return 0;
}
int main()
{
    char str1[20]="Hello World!";
    char str2[20]="Hello Hust";
    printf("%d\n",mystrnncmp(str1,str2,4));
    printf("%d\n",mystrnncmp(str1,str2,7));
}
