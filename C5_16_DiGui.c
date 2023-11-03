// //骑士游历问题
// //1.有一个 nxm的棋盘   2.马只能向右走  输入n和m找到从左下角(1,1)到右上角(n，m)的所有路径
// #include <stdio.h>
// int n,m;                   //记录棋盘大小
// int dy[]={2,1,-1,-2};       //跳跃的四个方向
// int dx[]={1,2,2,1};         
// int pos[100][2];       //记录跳过的位置，第0列是x坐标  第1列是y坐标
// int inchess(int x,int y)
// {
//     if(x>0&&x<=n&&y>0&&y<=m) return 1;
//     else return 0;
// }
// //输出跳跃路径
// void printresult(int a[][2],int n)
// {
//     int j;
//     static int count=0;
//     printf("Di %d TiaoLuJing:",count++);
//     printf("(%d,%d)",a[0][0],a[0][1]);      //输出起始位置
//     for(j=1;j<=n;j++)
//     {
//         printf("->(%d,%d)",a[j][0],a[j][1]);
//     }
// }
// //第i次跳跃
// void jumphorse(int i)
// {
//     int j;
//     if((pos[i][0]==n)&&(pos[i][1]==m))    //当前位置如果是终点
//     {
//         printresult(pos,i);
//     }
//     else
//     for(j=0;j<4;j++)
//     {
//         if(inchess(pos[i][0]+dx[j],pos[i][1]+dy[j]))
//         jumphorse(i+1);
//     }
// }
// int main()
// {
//     pos[0][0]=1;
//     pos[0][1]=1;
//     scanf("%d%d",&n,&m);
//     jumphorse(0);
//     return 0;
// }
#include <stdio.h>
int n,m;    //棋盘大小
int dy[]={2,1,-1,-2};
int dx[]={1,2,2,1};
int pos[100][2];      //记录跳过位置的坐标
int InChess(int x,int y)
{
    if(x>0&&x<=n&&y>0&&y<=m)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void PrintResult(int a[][2],int n)
{
    int j;
    static int count = 0;
    printf("Route %d :",count++);
    printf("(%d,%d)",a[0][0],a[0][1]);
    for(j=1;j<=n;j++)
    {
        printf("->(%d,%d)",a[j][0],a[j][1]);
    }
    printf("\n");
}
void jumpHorse(int i)
{
    int j;
    if((pos[i][0]==n)&&(pos[i][1]==m))
    {
        PrintResult(pos,i);
    } 
    else
    {
        for(j=0;j<4;j++)
        {
            if(InChess(pos[i][0]+dx[j],pos[i][1]+dy[j]))
            {
                pos[i+1][0]=pos[i][0]+dx[j];
                pos[i+1][1]=pos[i][1]+dy[j];
                jumpHorse(i+1);
            }
        }
    }
}
int main()
{
    pos[0][0]=1;
    pos[0][1]=1;
    scanf("%d%d",&n,&m);
    jumpHorse(0);
    return 0;
}