// ##include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// struct student{
// 	int num;
// 	char name[12];
// 	int score;
// };
// int main()
// {	
// 	int n;
// 	scanf("%d",&n); 
// 	struct student s[n];
// 	int i;
//     struct student *p;
// 	for(i=0;i<n;i++)
// 	{
// 		scanf("%d %s %d",&s[i].num,s[i].name,&s[i].score) ;
// 	}
//     p=s;
// 	for(i=0;i<n;i++)
//     {
// 	printf("%d %s %d\n",s[i].num,s[i].name,s[i].score);
//     p++;
//     }
//     p--;
// 	for(p;p!=s-1;p--)
// 	printf("%d %s %d\n",p->num,p->name,p->score);
// }
#include <stdio.h>
struct student
{
    int num;//学号
    char name[12];
    int score; //成绩
};

int main()
{
    int num=0;//初始化n个结构数组
    scanf("%d",&num);
    struct student s[num];
    for(int i=0;i<num;i++)
    {
        scanf("%d %s %d",&s[i].num,s[i].name,&s[i].score);
    }
    struct student *p;//定义一个结构指针
    p=s;  //p指向结构数组的第一个结构的地址
    //完成任务二 不用指针p依次输出各数组元素各成员的值
    for(int i=0;i<num;i++)
    {
        printf("%d %s %d\n",s[i].num,s[i].name,s[i].score);
    }
    //用指针p，依次逆序输出各数组元素的各成员之值
    for(p=p+num-1;p!=s-1;p--)
    {
        printf("%d %s %d\n",p->num,p->name,p->score);
    }

    
}