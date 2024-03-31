#include <stdio.h>
int count = 0;
int queen[8];
void output()
{
    printf("\nWay %d:",count);
    for(int i=0;i<8;i++)
    {
        printf("%2d",queen[i]);
    }
}
int available(int curRow,int curCol)
{
    for(int row=0;row<curRow;row++)
    {
        if(curCol==queen[row])
        {
            return 0;
        }
        if((curRow-row)==(curCol-queen[row]))
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
int main()
{
    int row,col=0;
    for(row=0;row<8;row++)  //对于每一行
    {
        if(row<0)
        {               //当向上退出了棋盘边界的时候表示全部解已经解出
            break;
        }
        for(;col<8;col++)
        {
            if(available(row,col))
            {
                queen[row]=col;
                if(row==7)
                {
                    count++;//如果这是第8个皇后       
                    output();
                    if(col==7)
                    {
                        col=queen[--row];
                        col++;
                        row--;
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                col=0;
                break;
            }
        }
        if(col==8)
        {
            col=queen[--row];
            col++;
            row--;
        }
    }
    return 0;
}