#include <stdio.h>
#include <stdint.h>
#define DELTA 0x933779b9 
#define MX (((z>>5^y<<2)+(y>>3^z<<4))^((sum^y)+(key[(p&3)^e]^z)))
//MX是一个混淆运算宏

void btea(uint32_t *v,int n,uint32_t const key[4])
{
    uint32_t y,z,sum;
    unsigned p,rounds,e;
    //加密算法
    if(n>1)
    {
        rounds=6+52/n; //这个可以说是预定义值，n=2是rounds=32,n
        sum=0;      //n是多少就把密文分为n部分
        z=v[n-1];   //z是待处理数据块的最后一个32位部分
        do{
            sum+=DELTA;
            e=(sum>>2)&3;  //e用于计算每轮的轮密钥
            for(p=0;p<n-1;p++)
            {
                y=v[p+1];
                z=v[p]+=MX;
            }
            y=v[0];
            z=v[n-1]+=MX;
        }
        while(--rounds);
    }
    //解密算法
    else if (n<-1)
    {
        n=-n;
        rounds=6+52/n;
        sum=rounds*DELTA;
        y=v[0];
        do
        {
            e=(sum>>2)&3;
            for(p=n-1;p>0;p--)
            {
                z=v[p-1];
                y=v[p]-=MX;
            }
            z=v[n-1];
            y=v[0]-=MX;
            sum-=DELTA;
        }while(--rounds);
    }
}

int main()
{
    uint32_t v[2]={1,2};//密文
    uint32_t const k[4]={2,2,3,4};
    int n=2;
    printf("加密前原始数据:%u %u\n",v[0],v[1]);
    btea(v,n,k);
    printf("加密后数据:%u %u\n",v[0],v[1]);
    btea(v,-n,k);
    printf("解密后数据:%u %u\n",v[0],v[1]);
}