//一个简单的PK游戏
//题意分析： i=1000 j=2000 胜率为1/2   PK后  失败的一方把自己的体力值的1/4 转移给 胜者的一方  求解经过4轮后的 体力差小于1000的概率
#include<stdio.h>
#include<math.h>
int main()
{
    int x=1000,y=2000;
    float count;
    for (int i=0;i<16;i++)
    {
        for(int j=0;j<4;j++)
        {
            int temp=1;
            temp=temp<<j;
            if((temp&i)==temp)
            {
                x+=y/4;
                y-=y/4;
            }
            else
            {
                x-=x/4;
                y+=x/4;  
            }
        }
        if(fabs(x-y)<1000)
        {
            count++;
        }
        
        
    }
    float p=count/16;
    printf("The possibility is %f",p);
    return 0;
}
