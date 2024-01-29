#include <stdio.h>
#include <stdlib.h>
struct Node{
    int ID;
    struct Node*next;
};
void Delete(struct Node*prev,struct Node*temp)
{
    prev->next=temp->next;
}
int main()
{
    struct Node*head=(struct Node*)malloc(sizeof(struct Node));
    head->next=NULL;//头指针的初始化
    int n=0,m=0;
    scanf("%d %d",&n,&m);//N个人，报M淘汰
    //创建链表
    //创建一个尾指针
    struct Node*tail=head;
    for(int i=1;i<=n;i++)
    {
        struct Node*new=(struct Node*)malloc(sizeof(struct Node));
        tail->next=new;
        new->next=head->next;
        new->ID=i;
        tail=tail->next;
    }
    //初始化完毕开始报数
    struct Node*temp=head;
    struct Node*prev=head;
    int count=0;
    int count1=0;
    while(count<n)
    { 
        if(count1==m-1)
        {
            count1=0;
            if(count<=n-3)
            {printf("%-2d",temp->next->ID);}
            else if(count==n-2)
            {
                printf("%d",temp->next->ID);
            }
            temp->next=temp->next->next;
            count++;
        }
        count1++;
        temp=temp->next;
    }
    printf("\n%d",temp->ID);
}
// #include <stdio.h>
// #include <stdlib.h>
// struct Node{
//     int ID;
//     struct Node*next;
// };
// void Delete(struct Node*prev,struct Node*temp)
// {
//     prev->next=temp->next;
// }
// int main()
// {
//     struct Node*head=(struct Node*)malloc(sizeof(struct Node));
//     head->next=NULL;//头指针的初始化
//     int n=0,m=0;
//     scanf("%d %d",&n,&m);//N个人，报M淘汰
//     //创建链表
//     //创建一个尾指针
//     struct Node*tail=head;
//     for(int i=1;i<=n;i++)
//     {
//         struct Node*new=(struct Node*)malloc(sizeof(struct Node));
//         new->next=NULL;
//         tail->next=new;
//         new->next=head->next;
//         new->ID=i;
//         printf("%d",new->ID);
//         tail=tail->next;
//     }
//     printf("Init Done\n");
//     //初始化完毕开始报数
//     struct Node*temp=head->next;
//     struct Node*prev=head;
//     int count=0;
//     while(count<n)
//     { 
//         if(temp->ID%m==0)
//         {
//             //如果删除最后一个结点
//             if(temp->next==head->next)
//             {
//                 prev->next=head->next;
//                 printf("%d",prev->ID);
//                 printf("%-2d",temp->ID);
//                 temp=head->next;
//             }//如果删除第一个结点
//             else if(temp==head->next)
//             {
//                 printf("%-2d",temp->ID);

//                 temp=head->next->next;
//             }
//             else
//             {
//             printf("%-2d",temp->ID);
//             prev->next=temp->next;
//             temp=prev->next; // update temp to the next node
//             }
//             count++; // increase count after deleting a node
//         }
//         else
//         {
//         prev=temp;
//         temp=temp->next;
//         }
//     }
//     printf("\n%d",temp->ID);
// }
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// struct node{
// 	int data;
// 	struct node* next;
// };
// int main()
// {
// 	int n,k;
// 	scanf("%d%d",&n,&k);
// 	int i;
// 	struct node* head;
// 	head=(struct node*)malloc(sizeof(struct node));
// 	head->data=1;
// 	struct node *p;
// 	p=head;
// 	for(i=2;i<=n;i++)
// 	{
// 		p->next=(struct node*)malloc(sizeof(struct node));
// 	p->next->data=i;
// 	p=p->next;	
// 	}
// 	p->next=head;
// 	p=head;
// 	i=0;
//     int count=0;
// 	while(p!=p->next)
// 	{
// 		i++;
// 		if(i==k-1)
// 		{	printf("%d",p->next->data);
// 			p->next=p->next->next;
//             count++;
//             if(count<n-1) putchar(' ');
//             else putchar('\n');
// 			i=0;
// 		}
// 		p=p->next;
// 	}
// 	printf("%d",p->data);
	
// }