//约瑟夫问题
//利用递归的方法求解
//游戏规则：n个人围成一个圈，分别编号为1-n
//          从1至m开始报数
//          报到m的人出圈
//接着下一个人又从1开始报数，如此循环，直到最后只剩一个人的时候，这个人就是胜利者
//利用递归求解问题关键是对问题进行抽象
//寻找相似的步骤，抽象为一个可以递推的函数
//寻找规律可以发现求解此类问题要经过两个步骤
//Step1：N个人从0号位置开始1~M报数
//Step2: 剩下的N-1个人从M号位置开始接着报数
//巧妙的设计：pos = pos % N;  0表示圈内，1表示圈外  用此表达式使数组抽象成一个圈
#include <stdio.h>
#define N 10
#define M 4
int circle[N]={0};
void josephus(int n,int m,int pos)
{
    int cnt;
    if(n==1)
    {
        return;   //剩下1人，胜利，设置终界
    }
    //从1~m开始报数
    for(cnt=1;cnt<=m;pos++)
    {
        pos = pos % N;
        if(circle[pos]==0)
        {
            cnt++;
        }
    }
    //报完将出圈的人的状态设置为1
    circle[pos-1]=1;
    josephus(n-1,m,pos);
}
int main()
{
   int i;
   josephus(N,M,0); 
   //
   for(i=0;circle[i];i++);//找胜利者，找到胜利者就终止，执行下一条语句，打印胜利者编号
   printf("%d\n",i+1);
   return 0;
}