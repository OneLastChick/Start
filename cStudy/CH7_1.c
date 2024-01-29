//选择法排序
#include <stdio.h>
int main()
{
    int n=0;
    scanf("%d\n",&n);
    int arr[n];   
    for(int b=0;b<n;b++)
    {
        scanf("%d",&arr[b]);     //Alert: 如果
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int min=i;
            if(arr[j]<arr[min])
            {
                min=j;
                int temp=arr[i];
                arr[i]=arr[min];
                arr[j]=temp;
            }
        }
    }
    for(int a=0;a<n;a++)
    {
        printf("%d ",arr[a]);
    }
    return 0;
}
//选择法排序
// #include <stdio.h>
// int main()
// {
//     int n=0;
//     scanf("%d\n",&n); // 读取要输入的数字个数
//     int arr[n];   
//     for(int i=0;i<n;i++) // 使用循环语句遍历数组arr
//     {
//         scanf("%d",&arr[i]); // 读取每个数字，并赋值给数组arr的第i个元素
//     }
//     for(int i=0;i<n;i++) // 使用循环语句遍历数组arr
//     {
//         int min=i; // 假设第i个元素是最小的
//         for(int j=i+1;j<n;j++) // 使用循环语句遍历剩余的未排序元素
//         {
//             if(arr[j]<arr[min]) // 如果有更小的元素
//             {
//                 min=j; // 更新最小元素的下标
//             }
//         }
//         if(min!=i) // 如果最小元素不是第i个元素
//         {
//             int temp=arr[i]; // 交换两个元素的位置
//             arr[i]=arr[min];
//             arr[min]=temp;
//         }
//     }
//     for(int a=0;a<n;a++) // 使用循环语句遍历数组arr
//     {
//         printf("%d ",arr[a]); // 输出数组arr的第a个元素
//     }
//     return 0;
// }
