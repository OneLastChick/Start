#include <stdio.h>
#include <stdlib.h>

// 定义链表结构
struct Node 
{
    char data;
    struct Node* next;
};

// 插入字符到链表尾部
struct Node* insertNode(struct Node* head, char data)
 {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) 
    {
        head = newNode;
    } 
    else 
    {
        struct Node* temp = head;
        while (temp->next != NULL) 
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}

// 遍历并输出链表中的字符
void DaYingLianBiao(struct Node* head) 
{
    struct Node* temp = head;
    while (temp != NULL) 
    {
        printf("%c", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int SearchchInLianBiao(struct Node * head,char target)
{
    struct Node* temp = head;
    int flag=0;
    while(temp!=NULL)
    {
        if(temp->data==target)
        {
            flag=1;
            break;
        }
    }
    return flag;
}
void DeleteTheSameElement(struct Node** head,int target)
{
    struct Node* temp = *head;
    struct Node* prev = temp;
    while(temp!=NULL)
    {
        if(temp->data==target)
        {
            //如果删除头结点
            if(temp==*head)
            {
                *head=temp->next;
                free(temp);
                temp=*head;
            }
            //删除中间和末尾的结点
            else
            {
                prev->next=temp->next;
                free(temp);
                temp=prev->next;
            }  
        }
        else  //如果不是目标就到下一个结点
        {
            temp=temp->next;
        }
    }
}
// void InsertTheElement(struct Node*head,int target)
// {
//     char first=head->data;
//     struct Node*temp=head;
//     struct Node*prev=temp;
//     while(temp->next!=NULL)
//     {
//         struct Node*max=NULL;
//         if(abs((temp->data)-first)>abs((temp->next->data)-first))
//         {
//             struct Node*max=temp;
//         }
//         temp=temp->next;
//     }

// }
int main() 
{
    struct Node* head = NULL; //定义一个头指针
    char ch;

    while ((ch = getchar()) != EOF) 
    {
        head = insertNode(head, ch);
    }
    char target;
    scanf(" %c",&target);
    if(SearchchInLianBiao(head,target))
    {
        DeleteTheSameElement(&head,target);
    }
    // else
    // {
    //     InsertTheElement(head,target);
    // }
    DaYingLianBiao(head);
    return 0;
}
