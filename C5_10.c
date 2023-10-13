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
    InsertSort(data,N);
    printf("\nAfter sort:");
    output(data,N);
    printf("\n");
    return 0;
}
void InsertSort(int a[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp = a[i];
        for(j=i-1;j>=0&&temp<a[j];j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=temp;
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
