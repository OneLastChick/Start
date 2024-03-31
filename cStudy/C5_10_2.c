  //带哨兵的插入排序算法
  //采用插入的方法实现数据的排序  
#include <stdio.h>
#define N 10
void InsertSort(int a[],int n);
void output(int a[],int n);
int main()
{
    int i,data[N]={2,87,39,49,34,62,53,6,44,98};
    printf("Before sort:");
    output(data,N);
    WithSentryInsertSort(data,N);
    printf("\nAfter sort:");
    output(data,N);
    printf("\n");
    return 0;
}
void WithSentryInsertSort(int a[],int n)
{
    int i,j,temp;
    for(i=2;i<n;i++)
    {
        a[0]=a[i];
        for(j=i-1;a[i]<a[j];j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=a[0];   //不用判断j>=0 边界范围  可以节省一半的时间
        output(a,n);
        printf("\n");
    }
}

void output(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
