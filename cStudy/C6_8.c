#include <stdio.h>
#include <stdlib.h>
//指针+ 带参main 实现排序方法
void fun(int a[],int n)
{
    if(n==1)
    {
        return;
    }
    else
    {
        int i=0,temp;
        for(i=0;i<n;i++)
        {
            if(*a>*(a+i))
            {
                temp=*a;
                *a=*(a+i);
                *(a+i)=temp;
            }
        }
    }
    a++;
    n--;
    fun(a,n);
}
int main(int argc,char * * argv)
{
    int n=argc-1,i,*a;
    if(argc<5)
    {
        printf("too few arguments!\n");
        return -1;
    }
    a=(int *)malloc(n * sizeof(int));
    for(i=0;i<n;i++)
    {
        a[i]=atoi(*++argv);
    }
    for(i=0;i<n;i++)
    {
        printf("%4d\n",a[i]);
    }
    printf("\n");
    fun(a,n);
    return 0;
}