#include <stdio.h>
#include "game.h"
void menu()
{
    printf("***************************************************\n");
    printf("****************1.   play           ***************\n");
    printf("****************0.   exit           ***************\n");
    printf("***************************************************\n");    

}  
void game()
{
    char board[ROW][COL];  //存储数据
    InitBoard(board,ROW,COL); //初始化棋盘
    DisplayBoard(board,ROW,COL);        //打印数组内容
    
}
int main()
{
    int input = 0;
    do
    {
      menu();
      printf("Please choose:)");
      scanf_s("%d",&input);
      switch(input)
      {
        case 1:
            printf("Game Start");
            break;
        case 0:
            printf("Exit Successfully");
            break;
        default:
            printf("Input error");
            break;
      }
      game();
    } while (input);
    
    return 0;
    
}