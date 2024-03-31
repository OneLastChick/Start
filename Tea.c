#include <stdio.h>
#include <stdint.h>

void encrypt (uint32_t *v,uint32_t *k)
{
    uint32_t v0=v[0],v1=v[1],sum=0,i;  //初始化变量 v0v1分别取输入数据的两个部分
    uint32_t delta=0x9e3779b9;   
    uint32_t k0=k[0],k1=k[1],k2=k[2],k3=k[3]; //从密钥中取出四个部分
    for(i=0;i<32;i++)
    {
        sum+=delta;
        v0+=((v1<<4)+k0)^(v1+sum)^((v1>>5)+k1);
        v1+=((v0<<4)+k2)^(v0+sum)^((v0>>5)+k3);
    }
    v[0]=v0;
    v[1]=v1;
}

void decrypt(uint32_t *v,uint32_t *k)
{
    uint32_t v0=v[0],v1=v[1],sum=0xc6ef3720,i; //sum是0x9e3778b9*32截取32位的结果
    uint32_t delta=0x9e3779b9;
    uint32_t k0=k[0],k1=k[1],k2=k[2],k3=k[3];
    for(i=0;i<32;i++)
    {
        v1-=((v0<<4)+k2)^(v0+sum)^((v0>>5)+k3); //就是上面加密的过程逆过来
        v0-=((v1<<4)+k0)^(v1+sum)^((v1>>5)+k1);
        sum-=delta;
    }
    v[0]=v0;
    v[1]=v1;
}

int main()
{
    uint32_t v[2]={1,2},k[4]={2,2,3,4};
    printf("加密前的数据:%u %u\n",v[0],v[1]);
    encrypt(v,k);
    printf("加密后数据:%u %u\n",v[0],v[1]);
    decrypt(v,k);
    printf("解密后数据:%u %u\n",v[0],v[1]);
}