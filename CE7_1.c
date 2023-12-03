// ??????????????????????????????????????????????????????????????C??????????????γ???????????0?????????1-5?????????й????
// ?? ????????????????????
// ?? ???????????????????
// ?? ??????????????????????????
// ?? ??????????????????????2λС??????
// ?? ?????λ??????????????????γ????????????????

// ??main????????????????????malloc???????????????
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
void ChoiceResort(struct student* head, int command1);
void MaoPao(struct student* head, int command1);
void swapData(struct student* ptr1, struct student* ptr2);
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
    printf("?????%dλ??????????\n",num);
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
        temp->averge = ((float)(temp->English + temp->math + temp->physical + temp->C) / 4); // ??????????????????????
        printf("%d %s %d %.2f\n",temp->ID,temp->name,sum,temp->averge);
        temp=temp->next;
    }
}
void ClearData(struct student*head)   //?е???????
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
void Resort(struct student*head)
{
    int command1,command2;
    scanf("%d %d",&command1,&command2);
    switch(command2)
    {
        case 0:
        ChoiceResort(head,command1);
        break;
        case 1:
        MaoPao(head,command1);
        break;
        default :
        printf("Input Error!");
    }
}
void ChoiceResort(struct student*head,int command1)
{
    struct student*temp=head->next;
    int length=0;
    while(temp!=NULL)
    {
        length++;//计算链表的长度
        temp=temp->next;
    }
    struct student*index=head->next;
    for(int i=0;i<length-1;i++)
    {
        index=head->next;
        temp=head->next;
        //移动指针到第i个位置
        for(int j=0;j<i;j++)
        {
            index=index->next;
            temp=temp->next;
        }
        struct student*memo=NULL;
        int max=index->averge;int min=index->averge;
        while(temp!=NULL)
        {
            
            //0升序  1降序
            
            switch(command1)
            {
                case 0:
                if(temp->averge<min) 
                {
                    memo=temp;
                    min=temp->averge;
                }
                break;
                case 1:
                if(temp->averge>max)
                {
                    memo=temp;
                    max=temp->averge;
                }
                break;
                default:
                printf("command1 Error!");
                return; 
            }
            temp=temp->next;
           
        }
        swapData(memo,index); 
        
    }

}

// void ChoiceResort(struct student*head,int command1)
// {
//     struct student*temp=head->next;
//     int length=0;
//     while(temp!=NULL)
//     {
//         length++;//????????????????
//         temp=temp->next;
//     }
//     struct student*index=head->next;
//     for(int i=0;i<length-1;i++)
//     {
//         index=head->next;
//         temp=head->next;
//         //????±??????????
//         for(int j=0;j<i;j++)
//         {
//             index=index->next;
//             temp=temp->next;
//         }
//         struct student*memo=NULL;
//         int max=index->averge;int min=index->averge;
//         while(temp!=NULL)
//         {
            
//             //0????  1????
            
//             switch(command1)
//             {
//                 case 0:
//                 if(temp->averge>max)
//                 {
//                     memo=temp;
//                     max=temp->averge;
//                 }
//                 break;
//                 case 1:
//                 if(temp->averge<min)
//                 {
//                     memo=temp;
//                     min=temp->averge;
//                 }
//                 break;
//                 default:
//                 printf("command1 Error!");
//             }
//             temp=temp->next;
//             //????????temp???????????
//         }
//         swapData(memo,index);
        
//     }

// }
// void MaoPao(struct student*head,int command1)
// {
//     struct student*temp=head->next;
//     int length=0;
//     while(temp!=NULL)
//     {
//         length++;
//         temp=temp->next;
//     }
//     for(int i=0;i<length-1;i++)
//     {
//         for(int j=0;j<length-i-1;j++)
//         { 
//             struct student*Index2=head->next;
//             for(int index2=0;index2<j;index2++)
//             {
//                 Index2=Index2->next;
//             }
//             switch(command1)
//             {
//                 case 0:
//                 if(Index2->averge<Index2->next->averge)
//                 {
//                     swapData(Index2,Index2->next);
//                 }
//                 break;
//                 case 1:
//                 if(Index2->averge>Index2->next->averge)
//                 {
//                     swapData(Index2,Index2->next);
//                 }
//                 break;
//                 default:
//                 printf("Command1 Error!\n");
//             }
//         }
//     }
// }
// // ???????
// 交换两个结点的数据
void swapData(struct student *ptr1, struct student *ptr2) {
    int tempID = ptr2->ID;
    char tempName[20];
    strcpy(tempName, ptr2->name);
    int tempEnglish = ptr2->English;
    int tempMath = ptr2->math;
    int tempPhysical = ptr2->physical;
    int tempC = ptr2->C;
    float tempAverge = ptr2->averge;
    ptr2->ID = ptr1->ID;
    strcpy(ptr2->name, ptr1->name);
    ptr2->English = ptr1->English;
    ptr2->math = ptr1->math;
    ptr2->physical = ptr1->physical;
    ptr2->C = ptr1->C;
    ptr2->averge = ptr1->averge;
    ptr1->ID = tempID;
    strcpy(ptr1->name, tempName);
    ptr1->English = tempEnglish;
    ptr1->math = tempMath;
    ptr1->physical = tempPhysical;
    ptr1->C = tempC;
    ptr1->averge = tempAverge;
}

// 选择排序法对链表进行排序
// void ChoiceResort(struct student *head, int command1) {
//     struct student *p = head; // p 指向头结点
//     struct student *q, *r; // q 和 r 用于遍历链表
//     while (p->next != NULL) { // 当 p 不是最后一个结点时
//         q = p->next; // q 指向 p 的下一个结点
//         r = q; // r 指向 q
//         while (q != NULL) { // 当 q 不为空时
//             switch (command1) {
//                 case 0: // 如果 command1 为 0，表示升序排序
//                     if (q->averge < r->averge) { // 如果 q 的平均成绩小于 r 的平均成绩
//                         r = q; // r 指向 q
//                     }
//                     break;
//                 case 1: // 如果 command1 为 1，表示降序排序
//                     if (q->averge > r->averge) { // 如果 q 的平均成绩大于 r 的平均成绩
//                         r = q; // r 指向 q
//                     }
//                     break;
//                 default: // 如果 command1 不是 0 或 1，表示参数错误
//                     fprintf(stderr, "command1 Error!\n"); // 输出错误信息到 stderr 流
//                     return; // 结束函数
//             }
//             q = q->next; // q 指向下一个结点
//         }
//         if (p != r) { // 如果 p 和 r 不相同
//             swapData(p, r); // 交换 p 和 r 的数据
//         }
//         p = p->next; // p 指向下一个结点
//     }
// }


// 冒泡排序法对链表进行排序
void MaoPao(struct student *head, int command1) {
    struct student *p = head->next; // p 指向第一个结点
    struct student *q, *r; // q 和 r 用于遍历链表
    while (p->next != NULL) { // 当 p 不是最后一个结点时
        q = head->next; // q 指向第一个结点
        r = q->next; // r 指向 q 的下一个结点
        while (r != p->next) { // 当 r 不是 p 的下一个结点时
            switch (command1) {
                case 0: // 如果 command1 为 0，表示升序排序
                    if (q->averge > r->averge) { // 如果 q 的平均成绩大于 r 的平均成绩
                        swapData(q, r); // 交换 q 和 r 的数据
                    }
                    break;
                case 1: // 如果 command1 为 1，表示降序排序
                    if (q->averge < r->averge) { // 如果 q 的平均成绩小于 r 的平均成绩
                        swapData(q, r); // 交换 q 和 r 的数据
                    }
                    break;
                default: // 如果 command1 不是 0 或 1，表示参数错误
                    printf("Command1 Error!\n"); // 输出错误信息
                    return; // 结束函数
            }
            q = q->next; // q 指向下一个结点
            r = r->next; // r 指向下一个结点
        }
        p = p->next; // p 指向下一个结点
    }
}

// void swapData(struct student*ptr1,struct student*ptr2)
// {
//     int tempID=ptr2->ID;
//     char tempName[20];
//     strcpy(tempName,ptr2->name);
//     int tempEnglish=ptr2->English;
//     int tempmath=ptr2->math;
//     int tempphysical=ptr2->physical;
//     int tempC=ptr2->C;
//     float tempaverge=ptr2->averge;
//     ptr2->ID=ptr1->ID;
//     strcpy(ptr2->name,ptr1->name);
//     ptr2->English=ptr1->English;
//     ptr2->averge=ptr1->averge;
//     ptr2->C=ptr1->C;
//     ptr2->math=ptr1->math;
//     ptr2->physical=ptr1->physical;
//     ptr1->ID=tempID;
//     strcpy(ptr1->name,tempName);
//     ptr1->math=tempmath;
//     ptr1->averge=tempaverge;
//     ptr1->physical=tempphysical;
//     ptr1->C=tempC;
//     ptr1->English=tempEnglish; 
// }

int main()
{
    int command=0;
    //?????????
    int num=0;
    struct student*head=(struct student*)malloc(sizeof(struct student));
    head->next=NULL;
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
            Resort(head);
            break;
            
        }
    }
    ClearData(head);
    return 0;
}