//通用排序函数的定义与调用
//对于任何类型的数组都能按任意顺序排序
#include <stdio.h>
#include <string.h>
void sort(void *x,int n,int size,int (*fmp)(const void *,const void *));
int icmpAsc(const void *s,const void *t);
int strCmpDes(const void *p1,const void *p2);
void swap(char *a,char *b,int size);

int main(void)
{
    int x[5]={5,3,8,7,9};
    int i;
    char *name[5]={"America","Germany","England","Australia","China"};
    sort(x,5,sizeof(x[0]),icmpAsc);
    for(i=0;i<5;i++)
    {
        printf("%d ",x[i]);
    }
    putchar('\n');
    sort(name,5,sizeof(name[0]),strCmpDes);
    for(i=0;i<5;i++)
    {
        printf("%s ",name[i]);
    }
    putchar('\n');
    return 0;
    
}

void sort(void *x,int n,int size,int (*fcmp)(const void *,const void *))
{
    int i,j,min;
    char *p;
    p=(char *)x;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(fcmp(p+min*size,p+j*size)>0)
            {
                min=j;
            }
        }
        if(i!=min)
        {
            swap(p+i*size,p+min*size,size);
        }
    }
}

void swap(char *a,char *b,int size)
{
    char tmp;
    if(a!=b)
    {
        while(size--)
        {
            tmp=*a;
            *a++=*b;
            *b++=tmp;
        }
    }
}

//比较回调函数：整数升序
int icmpAsc(const void *s,const void *t)
{
    return *(int *)s>*(int *)t?1:0;
}
//比较回调函数，按字典序降序
int strCmpDes(const void *p1,const void *p2)
{
    return strcmp(*(char **)p2,*(char **)p1);
}