//交换数组
#include <stdio.h>
void ExchangeArr(int arr[],int k,int n)
{
    for(int a=0;a<k;a++)
    {                         //0 1 2 3 4 5 6
        int temp=arr[n-k];  // 1 2 3 4 5 6 7
        arr[n-k]=arr[a];

        
    }
}
int main()
{
    int n=0;
    int k=0;
    scanf("%d %d\n",&n,&k);
    int arr[n];
    if(k>0&&k<n)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        ExchangeArr(arr,k,n);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
//交换数组


