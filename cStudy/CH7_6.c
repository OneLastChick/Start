#include <stdio.h>
// void ScanTDA(int array[][4],int m,int n,int row ,int col)   
// {                  // m      n
//     //从左往右读     col 行  row 列
//     for(;row<n;row++)
//     {
//         printf("%d ",array[col][row]);
//     }
//     col++;
//     //从上往下读
//     for(;col<m;col++)
//     {
//         printf("%d ",array[col][row]);
        

//     }
//     row++;
//     //从右往左读
//     for(;row>=0;row--)
//     {
//         printf("%d ",array[col][row]);
//     }
//     col--;
//     //从下往上读
//     for(;col<m-1;col++)
//     {
//         printf("%d ",array[col][row]);
//     }
//     ScanTDA(array,m,n,row,col);
// }
// void ScanTDA(int array[][4], int m, int n, int row, int col) {
//     // 从左往右读，从当前行的当前列开始
//     for (; row < n; row++) {
//         printf("%d ", array[col][row]);
//     }
//     col++;

//     // 从上往下读，从下一行的当前列开始
//     for (; col < m; col++) {
//         printf("%d ", array[col][row]);
//     }
//     row--;

//     // 从右往左读，从当前行的最后一列开始
//     for (; row >= 0; row--) {
//         printf("%d ", array[col][row]);
//     }
//     col--;

//     // 从下往上读，从倒数第二行的当前列开始，避免重复打印
//     for (; col > 0; col--) {
//         printf("%d ", array[col][row]);
//     }

//     // 递归调用
//     if (row < n && col < m) {
//         ScanTDA(array, m, n, row, col);
//     }
// }
// int main()
// {
//     int n=4;
//     int m=0;
//     scanf("%d",&m);
//     int TDA[m][n];
//     for(int col=0;col<n;col++)
//     {
//         scanf("%d %d %d %d",&TDA[col][0],&TDA[col][1],&TDA[col][2],&TDA[col][3]);
//     }
//     ScanTDA(TDA,m,n,0,0);
//     return 0;

// }
//--------非递归
#include <stdio.h>

void ScanTDA(int m, int n, int TDA[m][n]) {
    int c = 0;
    int a = m - 1;
    int d = 0;
    int b = n - 1;

    while (c <= a && d <= b) {
        // 从左到右
        for (int i = d; i <= b; i++) {
            printf("%d ", TDA[c][i]);
        }
        c++;

        // 从上到下
        for (int i = c; i <= a; i++) {
            printf("%d ", TDA[i][b]);
        }
        b--;

        // 从右到左
        if (c <= a) {
            for (int i = b; i >= d; i--) {
                printf("%d ", TDA[a][i]);
            }
            a--;
        }

        // 从下到上
        if (d <= b) {
            for (int i = a; i >= c; i--) {
                printf("%d ", TDA[i][d]);
            }
            d++;
        }
    }
}

int main() {
    int m, n;
    scanf("%d", &m);
    n=4;

    int TDA[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &TDA[i][j]);
        }
    }

    ScanTDA(m, n, TDA);

    return 0;
}
#include <stdio.h>
// void ScanJZ(int JZ[][4],int lie,int hang,int m,int n,int left,int right,int top,int bottom)
// {
//     if (left > right || top > bottom)
//     {
//         return;
//     }
//     //从左往右扫描 JZ[0][0]---JZ[0][3]
//     for(;m<right;m++)
//     {
//         printf("%d ",JZ[n][m]);
//     }
//     //上往下扫描
//     for(;n<bottom;n++)
//     {
//         printf("%d ",JZ[n][m]);
//     }
//           //从右往左扫描
//     for(;m>left;m--)
//     {
//         printf("%d ",JZ[n][m]);
//     }
    
//     for(;n<top;n--)
//     {
//         printf("%d ",JZ[n][m]);
//     }
//     left++;
//     right--;
//     top++;
//     bottom--;
//     ScanJZ(JZ,lie,hang,m,n,left,right,top,bottom);

// }


// int main()
// {
//     int lie= 4 ;
//     int hang=0;
//     scanf("%d",&hang);
//     int JZ[hang][lie];
//     for(int i=0;i<hang;i++)
//     {
//         for(int j=0;j<lie;j++)
//         {
//             scanf("%d",&JZ[i][j]);
//         }
//     }
//     int left=0;
//     int right=lie -1;
//     int top=0;
//     int bottom=hang-1;
//     ScanJZ(JZ,lie,hang,0,0,left,right,top,bottom);
//     return 0;
// }
// int main()
// {
//     int lie = 4;  // 定义 lie 变量并赋值
//     int hang = 0;
//     scanf("%d", &hang);
//     int JZ[hang][lie];
//     for (int i = 0; i < hang; i++)
//     {
//         for (int j = 0; j < lie; j++)
//         {
//             scanf("%d", &JZ[i][j]);
//         }
//     }
//     int left = 0;
//     int right = lie - 1;  // 修正 right 变量
//     int top = 0;
//     int bottom = hang - 1;
//     ScanJZ(JZ, lie, hang, 0, 0, left, right, top, bottom);
//     return 0;
// }
