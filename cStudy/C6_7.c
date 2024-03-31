#include <stdio.h>
//二级指针の初体验
int main()
{
    char **p,*s[]={"Chinese","English","French"};
    //p是二级指针，*s[]也是二级指针，
    int n;
    for(n=0,p=s;p<s+3;p++,n++)
    {
        printf("%c,%c,%s\n",*s[n],*(*p+n),*p);
    }
    return 0;
}