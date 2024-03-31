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
    printf("�����%dλͬѧ�ĳɼ�����\n",num);
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
    // ����ptr1��ptr2��ǰ���ڵ�
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
    //����һ���ṹ��ָ��q������ָ��ͷ���
    struct student*q=head;
    //����һ���ṹ��ָ��p������ָ��ͷ������һ����㣬Ҳ���ǵ�һ����Ч���ݽ��
    struct student*p=head->next;
    //����һ����������length��������¼��������Ч���ݽ��ĸ�������ʼֵΪ0
    int length=0;
    //����һ���ṹ��ָ��temp������ָ��ͷ������һ����㣬Ҳ���ǵ�һ����Ч���ݽ��
    struct student*temp=head->next;
    //��һ��whileѭ����������ÿ����һ����㣬����length��1��ֱ���������ս��Ϊֹ
    while(temp!=NULL) {
        length++;
        //����ÿ�����ݽ���ƽ���ɼ����ø�����������Ȼ��ѽ����ֵ������averge��Ա
        temp->averge = ((float) (temp->English + temp->math + temp->physical + temp->C) / 4);
        //��tempָ����һ����㣬��������
        temp = temp->next;
    }
    if(command1==0)
    {
    //0������������  1 2 3 4 5
    //����һ����������i��������ʾ��ǰҪ����Ľ���λ�ã���1��ʼ����length-1����
    int i=0;
    for(i=1;i<=length-1;i++)
    {
        //��qָ���i�����
        q=q->next;
        //��pָ���i+1�����
        p=p->next;
        //����һ����������min��������¼��ǰ��С��ƽ���ɼ�����ʼֵΪq��ƽ���ɼ�
        int min=q->averge;
        //����һ���ṹ��ָ��memo��������¼��ǰ��С��ƽ���ɼ����ڵĽ�㣬��ʼֵΪNULL
        struct student*memo=q;
        //��һ��forѭ���ӵ�i+1����㿪ʼ�����������һ����㣬ÿ����һ����㣬�ͺ�min�Ƚ�
        for(int j=i;j<=length&&p;j++)
        {
            //���p��ƽ���ɼ�С��min���͸���min��ֵ��ͬʱ��memoָ��p
            if(p->averge<min)
            {
                min=p->averge;
                memo=p;
            }
            //��pָ����һ����㣬��������
            p=p->next;
        }
        //���������pָ���i+1����㣬Ϊ��һ��ѭ����׼��
        p=q->next;
        //����һ���Զ���ĺ���swapData����������memo��q��ָ��Ľ������ݣ�ʵ������
        swapData(head,q,memo);
        q=memo;
    }
    }
    else
    {
        //0������������  1 2 3 4 5
    //����һ����������i��������ʾ��ǰҪ����Ľ���λ�ã���1��ʼ����length-1����
    int i=0;
    for(i=1;i<=length-1;i++)
    {
        //��qָ���i�����
        q=q->next;
        //��pָ���i+1�����
        p=p->next;
        //����һ����������min��������¼��ǰ��С��ƽ���ɼ�����ʼֵΪq��ƽ���ɼ�
        int max=q->averge;
        //����һ���ṹ��ָ��memo��������¼��ǰ��С��ƽ���ɼ����ڵĽ�㣬��ʼֵΪNULL
        struct student*memo=q;
        //��һ��forѭ���ӵ�i+1����㿪ʼ�����������һ����㣬ÿ����һ����㣬�ͺ�min�Ƚ�
        for(int j=i;j<=length&&p;j++)
        {
            //���p��ƽ���ɼ�С��min���͸���min��ֵ��ͬʱ��memoָ��p
            if(p->averge>max)
            {
                max=p->averge;
                memo=p;
            }
            //��pָ����һ����㣬��������
            p=p->next;
        }
        //���������pָ���i+1����㣬Ϊ��һ��ѭ����׼��
        p=q->next;
        //����һ���Զ���ĺ���swapData����������memo��q��ָ��Ľ������ݣ�ʵ������
        swapData(head,q,memo);
        q=memo;
    }
    }
    //������ɺ󣬵���һ���Զ���ĺ���PrintData��������ӡ�����е���������
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
            scanf("%d %d",&command1,&command2);///* ��һ��0��ʾ���������򣬵ڶ���0��ʾ��ѡ�� */
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