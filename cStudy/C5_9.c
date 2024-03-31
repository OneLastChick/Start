//统计在手机上按出句子至少需要按多少下  只读取小写字母和空格
#include<stdio.h>
int main()
{
    int i,sum=0;
    int n[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
    char c;
    while((c=getchar())!='\n')
        if(c==' ') sum++;
        else sum+=n[c-'a'];
    printf("%d\n",sum);
    return 0;
}