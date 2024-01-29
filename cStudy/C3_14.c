//大奖赛计分   答对问题   分数翻倍    答错 n 号问题 扣掉 n分       
#include <stdio.h>
// int main()
// {                                 
//     int a,b,c,d,e,f,h,i,j,k;
//     int score=10;
//     if(a=0)        不懂  值得研究
//     return 0;                        输出情况 0010110011 就是一种可能
// }
#define MSK 0x200
 int main()
 {
    int i,j,x;          // i 代表每种情况   j代表题目序号    x代表分数
    for(i=0;i<1024;i++)
    {   x=10;
        for(j=0;j<10;j++)
        {
            if((i<<j)& MSK)
                x<<=1;
            else
                x = x-(j+1);  //注意 序号  =  分数 - 1
        }
        if(x==100)
        {
            for(j=9;j>=0;j--)
                putchar((i>>j&1)+'0');
            putchar('\n');
        }
    }
    
    return 0;
 }