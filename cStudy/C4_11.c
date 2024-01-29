//冒泡排序
#include<stdio.h>
#define SIZE 5
void bubble_sort(int a[],int n)   // n=size
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        for(j=0;j<n;j++)
            printf("%d ",a[j]);
        printf("\n");
    }
}
int main()
{
    int numa[SIZE]={25,10,45,75,15};
    int i;
    printf("Before:\n");
    for(i=0;i<SIZE;i++) printf("%d",numa[i]);
    printf("\n");

    printf("Sorting.....\n");
    bubble_sort(numa,SIZE);
    
    printf("After:\n");
    for(i=0;i<SIZE;i++) printf("%d",numa[i]);
    printf("\n");
    return 0;
}