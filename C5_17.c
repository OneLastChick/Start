//能否在8X8的棋盘中摆放8个皇后使他们不在同一行  同一列  或者  同一对角线
#include <stdio.h>
int queen[8];  //记录找到的一种摆法
int count=0;   //记录摆法数
void output()  //输出一种摆法
{
    printf("\nWay%d:",count);
    for(int i=0;i<8;i++)
    {
        printf("%2d",queen[i]);
    }
}
//判断当前行curRow 和  当前列 curCol  能否放置皇后，能则返回1，否则返回0
int available(int curRow,int curCol)
{
    for(int row = 0 ;row < curRow ; row++)
    {
        if(curCol==queen[row])  //检测到当前列冲突
        {
            return 0;
        }
        if((curRow-row)==(curCol-queen[row]))   //检测到反斜线冲突
        {
            return 0;
        }
        if((curRow-row)==(queen[row]-curCol))
        {
            return 0;
        }
    }
    return 1;
}
void putQueen(int row)
{
    int col;
    if(row==8)
    {
        count++;
        output();
        return;
    }
    for(col=0;col<8;col++)
    {
        if(available(row,col))
        {
            queen[row]=col;
            putQueen(row+1);
        }
    }
}
int main()
{
    putQueen(0);
    return 0;
}