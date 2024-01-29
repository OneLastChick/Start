//微生物分裂问题
//有微生物 X 和 Y    X=10  Y=89  求60分钟的Y
//X: 隔三分钟分裂 出生后半分钟吃一个Y  随后一分钟吃一个Y   
//Y：隔两分钟分裂
#include <stdio.h>
int main()
{
    int X,Y,t;
    printf("In the beginning:X=10,Y=89"); 
    t=0,X=10,Y=89;               //0时刻      X共吃60次Y
    Y=Y-X;     //半分钟后   已经吃掉一次了
    for(t=1;t<60;t++)             //59次    然后还要分裂一次
    {
        if(!(t%2))
        {
            Y<<=1;
        }
        if(!(t%3))            //60分钟吃60次Y
        {                   
            X<<=1;
        }
        Y=Y-X;   //每隔一分钟  每个X 吃个 Y
        if(Y<0)
        {
            Y=0;
        }
       Y<<=1;
       X<<=1;
    }
     //第60分钟为计入  因此 还要分裂一次
    printf("After 60minutes,X=%d,Y=%d\n",X,Y);
    return 0;
}