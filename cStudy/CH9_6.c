// 代码区域的代码实现的功能是从输入的一行文本中删除所有与给定字符相同的字符。其采用数组来存储字符串，核心是delete_c函数，该函数利用两个下标j和k，一起向前移动。当碰到字符为给定字符时，下标j继续向前移动，而下标k保持不动，且不赋值，直到j来到不为c的单元才赋值。如此一直处理到字符串的结尾。
// 本关的任务是：
// （1） 改写基于字符数组的代码，采用单向链表存储字符串，每个节点存放一个字符。
// （2） 在编程思考9-1中分析比较两种实现方案的优劣。
#include <stdio.h>
#include <stdlib.h>
struct Node{
    char data;
    struct Node * next;
}Node;
void PrintDLB(struct Node*head)
{
    struct Node*temp=head->next;
    while(temp!=NULL)
    {
        printf("%c",temp->data);
        temp=temp->next;
    }
}
void DeleteTarget(struct Node*head,char target)
{
    struct Node*temp=head;
    struct Node*prev=head;
    while(temp)
    {
        if(temp->data==target)
        {
            if(temp==head)  //考虑删除第一个结点数据的特殊情况
            {
                head=temp->next;
                free(temp);
                temp=head;
                prev=head;  
            }
            else
            {
            prev->next=temp->next;
            free(temp);
            temp=prev->next;
            }
        }
        else
        {
        prev=temp;
        temp=temp->next;
        }
    }
}
int main()
{
    //初始单链表
    struct Node*head=(struct Node*)malloc(sizeof(struct Node));
    head->next=NULL;
    //读取字符，创建单链表
    char c;
    struct Node*temp=head;
    while((c=getchar())!='\n')
    {
        
        struct Node* New = (struct Node*)malloc(sizeof(struct Node));
        New->data = c;
        New->next = NULL;
        if(head->next == NULL)
        {
            
            head->data=c;
            head->next=New;
            continue;
        }
        else
        {
            
            
            temp->next = New;
            temp = temp->next;
        }
    }

    char target=getchar();
    DeleteTarget(head,target);
    PrintDLB(head);
    return 0;
}
    // while((c=getchar())!= EOF)
    // {
    //     //如果是头指针
    //     if(head->next==NULL)
    //     {
    //         head->data=c;
    //         continue;  //用continue 用break导致只能读取一个字符
    //     }
    //     struct Node*New=(struct Node*)malloc(sizeof(struct Node));
    //     New->data=c;
    //     New->next=NULL;
    //     temp->next=New;
    //     temp=New;
    // }
