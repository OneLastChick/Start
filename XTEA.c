#include<stdio.h>
#include<stdint.h>
 
void encipher(unsigned int num_rounds, uint32_t v[2], uint32_t const key[4]){
	unsigned int i;
	uint32_t v0=v[0],v1=v[1],sum=0,delta=0x9E3779B9;
	for(i=0;i<num_rounds;i++){
		v0+=(((v1<<4)^(v1>>5))+v1)^(sum+key[sum&3]);
		sum+=delta;
		v1+=(((v0<<4)^(v0>>5))+v0)^(sum+key[(sum>>11)&3]);
	}
	v[0]=v0;v[1]=v1;
}
 
void decipher(unsigned int num_rounds,uint32_t v[2],uint32_t const key[4]){
	unsigned int i;
	uint32_t v0=v[0],v1=v[1],delta=0x9E3779B9,sum=delta*num_rounds;
	for(i=0;i<num_rounds;i++){
	v1-=(((v0<<4)^(v0>>5))+v0)^(sum+key[(sum>>11)&3]);
	sum-=delta;
	v0-=(((v1<<4)^(v1>>5))+v1)^(sum+key[sum&3]);
	} 
	v[0]=v0;v[1]=v1;
}
 
int main(){
	uint32_t v[2]={1,2};
	uint32_t const k[4]={2,2,3,4};
	unsigned int r=32;				//这里是加密轮数，自己设置 
	printf("加密前原始数据：%u %u\n",v[0],v[1]);
	encipher(r,v,k);
	printf("加密后原始数据：%u %u\n",v[0],v[1]);
	decipher(r,v,k);
	printf("解密后原始数据：%u %u\n",v[0],v[1]);
	return 0;
}