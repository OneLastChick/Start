#include <stdio.h>
int queen[8];
int column[8];
int slash1[15];  //记录45度的冲突
int slash2[15];  //记录135度的冲突
int count=0;
void output()
{
    printf("\nWay %2d:",count);
    for(int i=0;i<8;i++)
    {
        printf("%2d",queen[i]);
    }
}
void putQueen(int row)
{
    int col;
    if(row==8)     //8个皇后全部放满
    {
        count ++;
        output();
        return;
    }
    for(col=0;col<8;col++)
    {
        if(column[col]&&slash1[row+col]&&slash2[row-col+7])//逐一尝试将当前行皇后放置在不同列上
        {
            queen[row]=col;     //在当前列放置皇后
            column[col]=slash1[row+col]=slash2[row-col+7]=0;//设置冲突范围
            putQueen(row+1);  //递归在下一行放置皇后
            column[col]=slash1[row+col]=slash2[row-col+7]=1;//撤销冲突范围
        }
    }
}
int main()
{
    for(int i=0;i<8;i++)
    {
        column[i]=1;
    }
    for(int i=0;i<15;i++)
    {
        slash1[i]=slash2[i]=1;
    }
    putQueen(0);   //从第0行开始摆放
    return 0;
}