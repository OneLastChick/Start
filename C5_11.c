//统计每个整数的次数
#include <stdio.h>
#define MAX 1001
int main()
{
    int n,i,max_times,ruler;
    int temp,data[MAX]={0};
    printf("Input the total of number(1<=n<=1000)\n");
    scanf("%d",&n);
    printf("ShuRu%dge zhengshu\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&temp);
        data[temp]++;
    }
    max_times=0;
    for(i=1;i<MAX;i++)     //Find 出现最多的整数
    {
        if(max_times<=data[i])  
            max_times=data[i];                  //Find 依次递减的整数
    }
    for(ruler=max_times;ruler>0;ruler--)     //数组下标代表次数
    {        
        for(i=1;i<MAX;i++)
        {
            if(data[i]==ruler) printf("%d:%d\n",i,data[i]);
        }
    }
    return 0;
    
    
    
    
}