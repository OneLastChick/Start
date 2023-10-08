//游程编码  压缩文件
#include <stdio.h>
#include <string.h>
#define GETSHORT(c,f)   (short int)((c&0xff)<<8|(f&0xff))
#define GETCHAR(d) (char)(d>>8)
#define GETFREQ(d) (int)(d&0xff)
#define RLCPRINT(d) printf("(\'%c\',%d)",d>>8,d&0xff)
int rlcCompress(char data[],short int rlcary[])
{
    char c;
    int len;
    int f,i,j,k;

    len=strlen(data);
    k=1;
    for(i=0;i<len;)        
    {
        c=data[i];  //c代表当前字符
        f=1;
        for(j=i+1;j<len;j++)         //f记录c出现的次数 
        {
            if(c==data[j])
                f++;
            else
                break;
        }
        i=j;
        rlcary[k++]=GETSHORT(c,f);
    }
    k--;
    rlcary[0]=k;
    return k;
}

int rlcDecompress(short int rlcary[],char data[])
{
    char c;
    int len;
    int f,i,j,n;

    len=0;
    n=rlcary[0];
    for(i=1;i<=n;i++)
    {
        c=GETCHAR(rlcary[i]);      //取出字符
        f=GETFREQ(rlcary[i]);      //取出次数
        for(j=0;j<f;j++)
            data[len++]=c;   
    }
    data[len]=0;
    return len;
}


int main()
{
    char str1[100]="aaaaaa3333377775552222b11111111";
    char str2[100];
    short int rlcAry[100];
    int i;

    printf("Before String=%s\n",str1);

    rlcCompress(str1,rlcAry);
    printf("RLC:");
    for(i=1;i<=rlcAry[0];i++)
    {
        RLCPRINT(rlcAry[i]);    //以(c，f)的形式编码二元组
        
    }
    printf("\n");
    rlcDecompress(rlcAry,str2);
    printf("After:%s\n",str2);
    if(strcmp(str1,str2))
        printf("Error !\n");
    else printf("Success!\n");
    return 0;
}