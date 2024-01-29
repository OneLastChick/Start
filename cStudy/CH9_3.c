// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// 	void tempstring(char **s1,char **s2);
// 	struct web{
// 		char wangzhi[100];
// 		char suolueming[100];
// 		char quanming[100];
// 	};
// 	int main()
// 	{
// 		int n;
// 		scanf("%d",&n);
// 		struct web s[100];
// 		int i,j;
// 		for(i=0;i<n;i++)
// 		{
// 			scanf("%s %s %s",s[i].wangzhi,s[i].suolueming,s[i].quanming);
// 		}
		
// 		for(i=0;i<n-1;i++)
// 		{
// 			for(j=0;j<n-i-1;j++)
// 			if(strcmp(s[j].suolueming,s[j+1].suolueming)>0)
// 			{	
// 				struct web temp;
// 				temp=s[j];
// 				s[j]=s[j+1];
// 				s[j+1]=temp;
// 			}
// 		}
//         for(i=0;i<n;i++)
//         printf("%s %s %s\n",s[i].wangzhi,s[i].suolueming,s[i].quanming);
// 		char *p;
// 		p=(char*)malloc(sizeof(char)*20);
// 		scanf("%s",p);
// 		for(i=0;i<n;i++)
// 		{
// 			if(strcmp(s[i].suolueming,p)==0)
// 			printf("%s",s[i].wangzhi);
// 		}
		
// 	}
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
     //输入一个sname，找到对应的url输出
    char *p;  //p相当于一个数组指针
    p=(char*)malloc(sizeof(char)*100);
    scanf("%s",p);
    //按照缩略名冒泡排序后输出
    for(int i=0;i<num-1;i++)
    {
        for(int j=0;j<num-i-1;j++)
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
    for(int i=0;i<num;i++)
    {
        printf("%s %s %s\n",web[i].url,web[i].sname,web[i].aname);
    }
   
    for(int i=0;i<num;i++)
    {
        if(strcmp(web[i].sname,p)==0)
        {
            printf("%s",web[i].url);
        }
    }
}
