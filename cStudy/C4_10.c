//判断回文数
//编写一个函数 判断10位数以内的自然是 是否是 回文数
#include <stdio.h>
int palindrome_number (unsigned long int n)
{
    int data[10];
    int i,j;
    i=0;
    while(n!=0)
    {
        data[i]=n%10;
        i++;
        n=n/10;
    }
    for(i=i-1,j=0;j<=i;i--,j++)
    {
        if(data[i]!=data[j]) return 0;
    }
    return 1;
}
int main()
{
    int n;
    printf("Please input a number");
    scanf("%d",&n);
    if(palindrome_number(n))
    {
        printf("Yes\n");
    }
    else printf("No\n");
    return 0;
}