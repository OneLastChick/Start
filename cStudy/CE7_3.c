#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    int ID;
    char name[20];
    int English;
    int math;
    int physical;
    int C;
    float averge;
    struct student* next;
};

void swapData(struct student *head,struct student* ptr1, struct student* ptr2);
void InsertData(struct student*head,int num)
{
    struct student*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    for(int i=0;i<num;i++)
    {
        struct student*New=(struct student*)malloc(sizeof(struct student));
        scanf("%d %s %d %d %d %d",&New->ID,New->name,&New->English,&New->math,&New->physical,&New->C);
        temp->next=New;
        New->next=NULL;
        temp=New;
    }
    printf("完成了%d位同学的成绩输入\n",num);
}
void PrintData(struct student*head)
{
    struct student*temp=head->next;
    while(temp!=NULL)
    {
        printf("%d %s %d %d %d %d\n",temp->ID,temp->name,temp->English,temp->math,temp->physical,temp->C);
        temp=temp->next;
    }
}

void EditData(struct student*head)
{
    int TargetID;
    scanf("%d",&TargetID);
    int EditWhich;
    scanf("%d",&EditWhich);
    struct student*temp=head->next;
    while(temp!=NULL)
    {
        if(temp->ID==TargetID)
        {
            switch(EditWhich)
            {
                case 0:
                scanf("%s",temp->name);
                break;
                case 1:
                scanf("%d",&temp->English);
                break;
                case 2:
                scanf("%d",&temp->math);
                break;
                case 3:
                scanf("%d",&temp->physical);
                break;
                case 4:
                scanf("%d",&temp->C);
                break;
                default :
                printf("Error!");
            }
            printf("%d %s %d %d %d %d\n",temp->ID,temp->name,temp->English,temp->math,temp->physical,temp->C);
        }
        temp=temp->next;
    }
    
    
}
void CountAvergyGrages(struct student*head)
{
    struct student*temp=head->next;
    while(temp!=NULL)
    {
        float averge;
        temp->averge = ((float)(temp->English + temp->math + temp->physical + temp->C) / 4);
        printf("%d %s %.2f\n",temp->ID,temp->name,temp->averge);
        temp=temp->next;
    }
}
void OutputData(struct student*head)
{
    struct student*temp=head->next;
    while(temp!=NULL)
    {
        int sum;
        sum=temp->English+temp->math+temp->physical+temp->C;
        temp->averge = ((float)(temp->English + temp->math + temp->physical + temp->C) / 4); 
        printf("%d %s %d %.2f\n",temp->ID,temp->name,sum,temp->averge);
        temp=temp->next;
    }
}
void ClearData(struct student*head)  
{
    struct student*temp=head->next;
    struct student*prev=NULL;
    while(temp!=NULL)
    {
        prev=temp->next;
        free(temp);
        temp=prev;

    }
    free(head);
}
void swapData(struct student* head, struct student* ptr1, struct student* ptr2) 
{
    struct student *prev1 = NULL, *prev2 = NULL, *temp = head;
    // 查找ptr1和ptr2的前驱节点
    while (temp != NULL) {
        if (temp->next == ptr1) {
            prev1 = temp;
        }
        if (temp->next == ptr2) {
            prev2 = temp;
        }
        temp = temp->next;
    } 
    if(ptr2->next==NULL)
    {
        prev1->next=ptr2;
        prev2->next=ptr1;
        ptr2->next=ptr1->next;
        ptr1->next=NULL;
    }
    else
    {
        prev1->next = ptr2;
        prev2->next = ptr1;
        struct student* tempNext = ptr1->next;
        ptr1->next = ptr2->next;
        ptr2->next = tempNext;
    }
}
void ChoiceResort(struct student*head,int command1)
{
    //定义一个结构体指针q，让它指向头结点
    struct student*q=head;
    //定义一个结构体指针p，让它指向头结点的下一个结点，也就是第一个有效数据结点
    struct student*p=head->next;
    //定义一个整数变量length，用来记录链表中有效数据结点的个数，初始值为0
    int length=0;
    //定义一个结构体指针temp，让它指向头结点的下一个结点，也就是第一个有效数据结点
    struct student*temp=head->next;
    //用一个while循环遍历链表，每遍历一个结点，就让length加1，直到遍历到空结点为止
    while(temp!=NULL) {
        length++;
        //计算每个数据结点的平均成绩，用浮点数除法，然后把结果赋值给结点的averge成员
        temp->averge = ((float) (temp->English + temp->math + temp->physical + temp->C) / 4);
        //让temp指向下一个结点，继续遍历
        temp = temp->next;
    }
    if(command1==0)
    {
    //0代表升序排序  1 2 3 4 5
    //定义一个整数变量i，用来表示当前要排序的结点的位置，从1开始，到length-1结束
    int i=0;
    for(i=1;i<=length-1;i++)
    {
        //让q指向第i个结点
        q=q->next;
        //让p指向第i+1个结点
        p=p->next;
        //定义一个整数变量min，用来记录当前最小的平均成绩，初始值为q的平均成绩
        int min=q->averge;
        //定义一个结构体指针memo，用来记录当前最小的平均成绩所在的结点，初始值为NULL
        struct student*memo=q;
        //用一个for循环从第i+1个结点开始，遍历到最后一个结点，每遍历一个结点，就和min比较
        for(int j=i;j<=length&&p;j++)
        {
            //如果p的平均成绩小于min，就更新min的值，同时让memo指向p
            if(p->averge<min)
            {
                min=p->averge;
                memo=p;
            }
            //让p指向下一个结点，继续遍历
            p=p->next;
        }
        //遍历完后，让p指向第i+1个结点，为下一次循环做准备
        p=q->next;
        //调用一个自定义的函数swapData，用来交换memo和q所指向的结点的数据，实现排序
        swapData(head,q,memo);
        q=memo;
    }
    }
    else
    {
        //0代表升序排序  1 2 3 4 5
    //定义一个整数变量i，用来表示当前要排序的结点的位置，从1开始，到length-1结束
    int i=0;
    for(i=1;i<=length-1;i++)
    {
        //让q指向第i个结点
        q=q->next;
        //让p指向第i+1个结点
        p=p->next;
        //定义一个整数变量min，用来记录当前最小的平均成绩，初始值为q的平均成绩
        int max=q->averge;
        //定义一个结构体指针memo，用来记录当前最小的平均成绩所在的结点，初始值为NULL
        struct student*memo=q;
        //用一个for循环从第i+1个结点开始，遍历到最后一个结点，每遍历一个结点，就和min比较
        for(int j=i;j<=length&&p;j++)
        {
            //如果p的平均成绩小于min，就更新min的值，同时让memo指向p
            if(p->averge>max)
            {
                max=p->averge;
                memo=p;
            }
            //让p指向下一个结点，继续遍历
            p=p->next;
        }
        //遍历完后，让p指向第i+1个结点，为下一次循环做准备
        p=q->next;
        //调用一个自定义的函数swapData，用来交换memo和q所指向的结点的数据，实现排序
        swapData(head,q,memo);
        q=memo;
    }
    }
    //排序完成后，调用一个自定义的函数PrintData，用来打印链表中的所有数据
    CountAvergyGrages(head);
}

// void MaoPao(struct student*head,int command1)
// {
//     struct student*q=head;
//     struct student*p=head->next;
//     struct student*temp=head->next;
//     int length=0;
//     while(temp!=NULL)
//     {
//         length++;
//         temp->averge = ((float) (temp->English + temp->math + temp->physical + temp->C) / 4);
//         temp=temp->next;
//     }
//     if(command1==0)
//     {
//     for(int i=1;i<=length-1;i++)
//     {
//         for(int j=1;j<=length-i;j++)
//         {
//             if(q->averge>p->averge)
//             {
                
//             }
            
//         }
        
//     }
//     }
//     else
//     {
//         for(int i=1;i<=length-1;i++)
//     {
//         for(int j=1;j<=length-i;j++)
//         {
//             if(p->averge<p->next->averge)
//             {
//                 swapData(head,p,p->next);
//                 p=p->next;
//             }
//             p=p->next;
//         }
//         p=head->next;
//     }
//     }
//     CountAvergyGrages(head);
// }
void MaoPao(struct student*head,int command1)
{
    struct student*q=head;
    struct student*p=head->next;
    struct student*temp=head->next;
    struct student*temp1=head;
    struct student*temp2=head;
    int length=0;
    while(temp!=NULL)
    {
        length++;
        temp->averge = ((float) (temp->English + temp->math + temp->physical + temp->C) / 4);
        temp=temp->next;
    }
    if(command1==0)
    {
    for(int i=1;i<=length-1;i++)
    {
        for(int j=1;j<=length-i;j++)
        {
            if(p->averge>p->next->averge)
            {
                struct student*temp1=p;
                struct student*temp2=p->next;
                swapData(head,p,p->next);
                p=temp1;
                p->next=temp2;
                
            }
            p=p->next;
        }
        p=head->next;
    }
    }
    else
    {
        for(int i=1;i<=length-1;i++)
    {
        for(int j=1;j<=length-i;j++)
        {
            if(p->averge<p->next->averge)
            {
                struct student*temp1=p;
                struct student*temp2=p->next;
                swapData(head,p,p->next);
                p=temp1;
                p->next=temp2;;
            }
            p=p->next;
        }
        p=head->next;
    }
    }
    CountAvergyGrages(head);
}

int main()
{
    int command=0;
    int num=0;
    struct student*head=(struct student*)malloc(sizeof(struct student));
    head->next=NULL;
    int command1;
    int command2;
    while(scanf("%d",&command),command)
    {
        switch (command)
        {
        case 1:
            scanf("%d",&num);
            InsertData(head,num);
            break;
        
        case 2:
            PrintData(head);
            break;
        case 3:
            EditData(head);
            break;
        case 4:
            CountAvergyGrages(head);
            break;
        case 5:
            OutputData(head);
            break;
        case 6:
            scanf("%d %d",&command1,&command2);///* 第一个0表示按升序排序，第二个0表示用选择法 */
            if(command2==0||command2==1)
            {
                ChoiceResort(head,command1);
            }
            else
            {
                MaoPao(head,command1);
            }
            break;

        }
    }
    ClearData(head);
    return 0;
}