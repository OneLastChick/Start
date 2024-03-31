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
        temp=temp->next;
    }
    return flag;
}
void DeleteTheSameElement(struct Node** head,char target)
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
            prev=temp;
            temp=temp->next;
        }
    }
}
void InsertTheElement(struct Node*head,char target)
{
    //查找与第一个字符差值绝对值最大的链表的序号
    struct Node*temp=head;
    int max=0;
    int maxIndex=0;
    for(int i=1;temp->next!=NULL;i++)
    {
        if(abs((temp->data)-target)>max)
        {
            maxIndex=i;
            max=abs((temp->data)-target);
        }
        temp=temp->next;
    }
    temp=head;
    for(int j=1;temp&&j<maxIndex;++j)
    {
        temp=temp->next;
    }
    struct Node* q=(struct Node*)malloc(sizeof(struct Node));
        q->data=target;
        q->next=temp->next;
        temp->next=q;
}


// void InsertTheElement(struct Node** head, char target) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = target;
//     newNode->next = NULL;

//     if (*head == NULL) {
//         *head = newNode; // 如果链表为空，则将新节点作为头节点
//         return;
//     }

//     struct Node* temp = *head;
//     struct Node* maxNode = *head;
//     int maxDiff = abs((*head)->data - target);

//     while (temp->next != NULL) {
//         int diff = abs(temp->data - target);
//         if (diff > maxDiff) {
//             maxDiff = diff;
//             maxNode = temp;
//         }
//         temp = temp->next;
//     }

//     // 在最大差值节点后插入新节点
//     newNode->next = maxNode->next;
//     maxNode->next = newNode;
// }
// void InsertTheElement(struct Node** head, char target) {
//     struct Node* q = (struct Node*)malloc(sizeof(struct Node));
//     q->data = target;
//     q->next = NULL;

//     if (*head == NULL) {
//         *head = q;
//         return;
//     }

//     struct Node* temp = *head;
//     struct Node* maxNode = *head;
//     int maxDiff = abs(target - (*head)->data); // 计算第一个节点与目标字符的差值
//     int max = 0;

//     while (temp->next != NULL) {
//         int diff = abs(temp->data - target);
//         if (diff > maxDiff) {
//             maxDiff = diff;
//             maxNode = temp;
//         }
//         temp = temp->next;
//     }

//     // 在最大差值节点后插入新节点
//     q->next = maxNode->next;
//     maxNode->next = q;
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
    scanf("%c",&target);
    if(SearchchInLianBiao(head,target))
    {
        DeleteTheSameElement(&head,target);
        DaYingLianBiao(head);
    }
    else
    {
        InsertTheElement(head,target);
        DaYingLianBiao(head);
    }
    
    return 0;
}
