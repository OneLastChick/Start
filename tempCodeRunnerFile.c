#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct web
{
    char url[100];
    char sname[100];
    char aname[100];
};
int main()
{
    //第一个任务
    int num=0;//定义接受n个数据
    scanf("%d",&num);
    struct web web[num];
    for(int i=0;i<num;i++)
    {
        scanf("%s %s %s",web[i].url,web[i].sname,web[i].aname);
    }
    //按照缩略名冒泡排序后输出
    for(int i=0;i<num-1;i++)
    {
        for(int j=0;j<num-i-i;j++)
        {
            if(strcmp(web[j].sname,web[j+1].sname)>0)
            {
                struct web temp;
                temp=web[j];
                web[j]=web[j+1];
                web[j+1]=temp;
            }
        }
    }
    //排序后输出
    for(int i=0;i<num-1;i++)
    {
        printf("%s %s %s\n",web[i].url,web[i].sname,web[i].aname);
    }
    //输入一个sname，找到对应的url输出
    char *p=(char *)malloc(sizeof(char)*100);
    scanf("%s",p);
    for(int i=0;i<num;i++)
    {
        if(strcmp(web[i].sname,p)==0)
        {
            printf("%s",web[i].url);
        }
    }
}