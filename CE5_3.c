// #include <stdio.h>
// int queen[11];
// int column[11];
// int slash1[20];  //记录45度的冲突
// int slash2[20];  //记录135度的冲突
// int count=0;
// int n=0;//定义棋盘的大小
// void output()
// {
//     printf("\nWay %2d:",count);
//     for(int i=0;i<n;i++)
//     {
//         printf("%2d",queen[i]);
//     }
// }
// void putQueen(int row)
// {
//     int col;
//     if(row==n)     //8个皇后全部放满
//     {
//         count ++;
//         output();
//         return;
//     }
//     for(col=0;col<n;col++)
//     {
//         if(column[col]&&slash1[row+col]&&slash2[row-col+n-1])//逐一尝试将当前行皇后放置在不同列上
//         {
//             queen[row]=col;     //在当前列放置皇后
//             column[col]=slash1[row+col]=slash2[row-col+n-1]=0;//设置冲突范围
//             putQueen(row+1);  //递归在下一行放置皇后
//             column[col]=slash1[row+col]=slash2[row-col+n-1]=1;//撤销冲突范围
//         }
//     }
// }
// int main()
// {
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         column[i]=1;
//     }
//     for(int i=0;i<(2*n-1);i++)
//     {
//         slash1[i]=slash2[i]=1;
//     }
//     putQueen(0);   //从第0行开始摆放
//     return 0;
// }
//N皇后问题
#include <stdio.h>

int queen[11];       // 用于记录每行皇后所在的列号
int column[11];      // 用于标记每列是否已有皇后，1表示可用，0表示已被占用
int slash1[20];      // 用于记录45度对角线上的冲突情况
int slash2[20];      // 用于记录135度对角线上的冲突情况
int count = 0;       // 用于计数满足条件的解的数量
int n = 0;           // 棋盘的大小，即皇后的数量

void putQueen(int row)
{
    int col;
    if (row == n)  // 所有皇后都已放置完成
    {
        count++;
        return;
    }
    for (col = 0; col < n; col++)
    {
        // 检查当前位置是否可以放置皇后，满足条件的话就放置皇后并递归下一行
        if (column[col] && slash1[row + col] && slash2[row - col + n - 1])
        {
            queen[row] = col;  // 在当前列放置皇后
            column[col] = slash1[row + col] = slash2[row - col + n - 1] = 0; // 标记冲突范围
            putQueen(row + 1);  // 递归放置下一行的皇后
            // 恢复冲突标记，以便尝试其他位置
            column[col] = slash1[row + col] = slash2[row - col + n - 1] = 1;
        }
    }
}

int main()
{
    scanf("%d", &n);  // 从用户输入获取棋盘大小
    for (int i = 0; i < n; i++)
    {
        column[i] = 1;  // 初始化列标记，表示所有列都可以放置皇后
    }
    for (int i = 0; i < (2 * n - 1); i++)
    {
        slash1[i] = slash2[i] = 1;  // 初始化对角线冲突标记，表示没有冲突
    }
    putQueen(0);  // 从第0行开始放置皇后
    if(count==0)
    {
        printf("无解\n");
    }
    else
    {
        printf("%d\n",count);
    }
    return 0;
}
