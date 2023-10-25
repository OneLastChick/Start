// //交换数组
// #include <stdio.h>
// void ExchangeArr(int arr[],int k,int n)
// {
//     if(int i=0;i<k;i+)        // 1  2  3 | 4  5  6  7
//     {
       
//     }
// }
// int main()
// {
//     int n=0;
//     int k=0;
//     scanf("%d %d\n",&n,&k);
//     int arr[n];
//     if(k>0&&k<n)
//     {
//         for(int i=0;i<n;i++)
//         {
//             scanf("%d",&arr[i]);
//         }
//         ExchangeArr(arr,k,n);
//     }
//     for(int i=0;i<n;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }
//交换数组
// Solve2:
// #include <stdio.h>
// int main()
// {
//     int n=0;
//     int k=0;
//     scanf("%d %d\n",&n,&k);
//     int arr[n];
//     if(k>0&&k<n)
//     {
//         for(int i=0;i<n;i++)
//       {
//              scanf("%d",&arr[i]);
//         }
//         for(int i=k+1;i<=n;i++)
//         {
//             printf("%d ",arr[i-1]);
//         }
//         for(int i=1;i<k+1;i++)
//         {
//             printf("%d ",arr[i-1]);
//         }
//     }
//     return 0;
// }
#include <stdio.h>

// 定义一个函数swap，接受一个数组u和两个整数k和n作为参数
void swap(int u[], int k, int n) {
  // 定义一个临时变量temp，用于存放交换的元素
  int temp;
  // 用一个循环，从0到k-1，依次交换u[i]和u[i+n-k]
  for (int i = 0; i < k; i++) {
    // 将u[i]赋值给temp
    temp = u[i];
    // 将u[i+n-k]赋值给u[i]
    u[i] = u[i + n - k];
    // 将temp赋值给u[i+n-k]
    u[i + n - k] = temp;
  }
}

int main() {
  // 定义两个整数n和k，用于存放数组长度和交换分界点
  int n, k;
  // 从标准输入读取n和k的值
  scanf("%d %d", &n, &k);
  // 定义一个长度为n的数组u，用于存放数组元素
  int u[n];
  // 用一个循环，从0到n-1，依次从标准输入读取u[i]的值
  for (int i = 0; i < n; i++) {
    scanf("%d", &u[i]);
  }
  // 调用swap函数，传入u,k和n作为参数
  swap(u, k, n);
  // 用一个循环，从0到n-1，依次将u[i]的值输出到标准输出，每个元素后面跟一个空格
  for (int i = 0; i < n; i++) {
    printf("%d ", u[i]);
  }
  // 输出一个换行符
  printf("\n");
  // 返回0表示程序正常结束
  return 0;
}


