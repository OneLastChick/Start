#include <stdio.h>
#include <string.h>
void rc4_init(unsigned char *s,unsigned char *key,unsigned long Len)
{
    int i=0,j=0;
    char k[256]={0};
    unsigned char tmp=0;

    for(i=0;i<256;i++)
    {
        s[i]=i;
        k[i]=key[i%Len]; //把key循环赋给k[]里
    }

    //打乱SBox,只是其中的元素进行了随机交换
    for(i=0;i<256;i++)
    {
        j=(j+s[i]+k[i])%256; //!这是一个伪随机数
        tmp=s[i];
        s[i]=s[j];
        s[j]=tmp;
    }
}


void rc4_crypt(unsigned char *s,unsigned char *Data,unsigned long Len)
{
    int i=0,j=0,t=0;
    unsigned long k=0;
    unsigned char tmp;

    //实际上就是Data的每个字节与Sbox的一个伪随机位置进行字节异或，进行一次还改变S盒子
    for(k=0;k<Len;k++)
    {
        //通过一定算法生成伪随机数,再打乱S-box
        i=(i+1)%256;
        j=(j+s[i])%256;
        tmp=s[i];
        s[i]=s[j]; //交换s[x]和s[y]
        s[j]=tmp;
        //再生成一个随机位置，对明文进行异或
        t=(s[i]+s[j])%256;
        Data[k]^=s[t];
    }
}

int main()
{
    unsigned char s[256]={0},s2[256]={0};
    char key[256]={"HelloWorld"};
    char pData[512]="HelloWorld";
    unsigned long len=strlen(pData);
    int i;

    printf("pData=%s\n",pData);
    printf("key=%s,length=%d\n\n",key,strlen(key));
    rc4_init(s,(unsigned char*)key,len);
    printf("完成对S[i]的初始化，如下:\n\n");
    //输出S[i]
    for(i=0;i<256;i++)
    {
        printf("%02X",s[i]);
        if(i&&(i+1)%16==0)
        {
            putchar('\n');
        }
    }
    printf("\n\n");
    //用s2[i]暂时保存初始化过的s[i],用来解密
    for(i=0;i<256;i++)
    {
        s2[i]=s[i];
    }
    printf("已经初始化，现在加密:\n\n");
    rc4_crypt(s,(unsigned char*)pData,len);
    printf("pData=%s\n\n",pData);
    printf("已经加密，现在解密:\n\n");
    rc4_crypt(s2,(unsigned char*)pData,len);
    printf("pData=%s\n\n",pData);
}