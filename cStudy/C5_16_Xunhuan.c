#include <stdio.h>
int n,m;
int dy[]={2,1,-1,-2};
int dx[]={1,2,2,1};
int pos[100][2];
int route[100];      //step走了几步 
int InChess(int x,int y)  //判断位置是否在棋盘上
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
    printf("Route %d:",count++);
    printf("(%d,%d)",a[0][0],a[0][1]);
    for(j=1;j<=n;j++)
    {
        printf("->(%d,%d)",a[j][0],a[j][1]);
    }
    printf("\n");
}
void jumpHorse()
{
    int x=1;
    int y=1;
    int step =1 ;
    while(step>0)
    {
        route[step]++;
        if(route[step]>4)
        {
            step--;
            x=x-dx[route[step]-1];
            y=y-dy[route[step]-1];
        }
        else
        {
            x=x+dx[route[step]-1];
            y=y+dy[route[step]-1];
            if(InChess(x,y))
            {
                pos[step][0]=x;
                pos[step][1]=y;
                if (x==n&&y==m)
                {
                    PrintResult(pos,step);
                    x=x-dx[route[step]-1];
                    y=y-dy[route[step]-1];

                }
                else
                {
                    step++;           //如果未到达终点，继续尝试一步
                    route[step]=0;     //下一步从第一个方向开始尝试
                }
                
            }
            else    //不在棋盘就恢复，回退一步
            {
                x=x-dx[route[step]-1];
                y=y-dy[route[step]-1];
            }
        }
    }
}
int main()
{
    pos[0][0]=1;
    pos[0][1]=1;
    scanf("%d%d",&n,&m);  //输入棋盘的x，y大小
    jumpHorse();
    return 0;
}