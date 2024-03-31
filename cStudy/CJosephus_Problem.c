//约瑟�?�?�?
//利用递归的方法求�?
//游戏规则：n�?人围成一�?圈，分别编号�?1-n
//          �?1至m开始报�?
//          报到m的人出圈
//接着下一�?人又�?1开始报数，如�?�循�?，直到最后只剩一�?人的时候，这个人就�?胜利�?
//利用递归求解�?题关�?�?对问题进行抽�?
//寻找相似的�?��?�，抽象为一�?�?以递推的函�?
//寻找规律�?以发现求解�?�类�?题�?�经过两�?步�??
//Step1：N�?人从0号位�?开�?1~M报数
//Step2: 剩下的N-1�?人从M号位�?开始接着报数
//巧�?�的设�?�：pos = pos % N;  0表示圈内�?1表示圈�??  用�?�表达式使数组抽象成一�?�?
#include <stdio.h>
#define N 10
#define M 3
int circle[N]={0};
void josephus(int n,int m,int pos)
{
    int cnt;
    if(n==1)
    {
        return;   
    }

    for(cnt=1;cnt<=m;pos++)
    {
        pos = pos % N;
        if(circle[pos]==0)
        {
            cnt++;
            
        }
    }
    circle[pos-1]=1;
    printf("%6d",pos);
    josephus(n-1,m,pos);
}
int main()
{
   int i;
   josephus(N,M,0); 
   for(i=0;circle[i];i++);
   printf("\n%d\n",i+1);
   return 0;
}