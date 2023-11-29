#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define OK 1
#define ERROR 0

typedef int Status;
typedef int ElemType;

typedef struct Node{
    ElemType data;
    struct Node * next;
}Node;

typedef struct Node* LinkList;

//初始化链表
Status IniList(LinkList *L)
{
    *L=(LinkList)malloc(sizeof(Node));
    (*L)->next=NULL;
    return OK;
}

//判断单链表是否为空表
//只用判断头指针指向的是NULL即可
bool Empty(LinkList L)
{
    if(L->next==NULL)
    {
        return true;
    }
    return false;
}

//单链表的销毁   对头指针进行了具体的操作，因此要传入二级指针，才能对链表进行修改，否则只是对
Status DestroyList(LinkList *L)
{
    LinkList p=*L;   //前继指针，指向前一个
    //
    while(*L!=NULL)
    {
        *L=(*L)->next;
        free(p);
        p=*L;
    }
    return OK;
}

//求单链表的表长   返回第i位置的元素
Status GetElem(LinkList L,int i,ElemType *e)
{
    Node *p;
    p=L->next;
    int j=1;
    for(;p&&j<i;++j)
    {
        p=p->next;
    }
    
    if(!p||j>i)  //如果指针p到NULL了，说明i位置不在该链表
    {
        return ERROR;
    }

    *e=p->data;
    return *e;
}

//单链表元素的查找
//按值查找数据所在地址并返回 该数据的地址
LinkList searchAD(LinkList L,ElemType e)
{
    LinkList p;  //定义一个后驱指针
    p=L->next;
    
    for(int i=0;p&&i<ListLength(L);i++)
    {
        if(p->data==e)
        {
            break;
        }
        p=p->next;
    }
    return p;
}

//查到到该数据后返回序号
int searchNum(LinkList L,ElemType e)
{
    LinkList p;
    p=L->next;
    for(int i=0;p&&i<ListLength(L);i++)
    {
        if(p->data==e)
        {
            return i+1;
        }
        p=p->next;
    }
    return ERROR;
}


//单链表的结点插入
//实现方法是先将插入位置找到，利用前一个位置的指针p对其后继进行保留，
//随后定义一个新结点并用它的指针q，进行前驱后继的衔接。
Status LinkInsert(LinkList L,int i,ElemType e)
{
    LinkList p,q;  
    p=L; //指向头结点,作为对头指针的一个拷贝.但指向的内容其实是头指针指向的内容，指向的地址一样但是占用的内存不同
    q=(Node *)malloc(sizeof(Node));//开辟新的
    q->data=e;
    q->next=NULL;
    
    for(int j=0;p&&j<i-1;j++)
    {
        if(i>ListLength(L)+1||i<1)   //考虑插入的范围，头插入或者尾插入，超出范围错误
        {
            return ERROR;
        }
        p=p->next;
    }

    //将待插入结点的前后结点形成链式关系
    //目前p的位置是第i个
    q->next=p->next;
    p->next=q;   //实现前驱后继
    
    return OK;
}

//实现单链表的结点删除
Status deleElem(LinkList L,int i)
{
    LinkList p,q; //p指向删除位置的前一结点，q指向需要删除的结点
    p=L;
    for(int j=0;p&&j<i-1;j++)
    {
        p=p->next;
    }
    q=p->next; //如果所需删除结点存在，则将q指向它，如果不存在则返回错误
    if(!q)
    {
        return ERROR;
    }
    p->next=p->next->next;
    free(q); //释放删除的结点的内存
    return OK;
}

//单链表的创建   输入n个元素，元素从头开始依次插入
//Way1  头插法
Status CreateList_H(LinkList *L,int n)
{
    LinkList p,r;//p指向新指针，r指向头结点
    *L=(LinkList)malloc(sizeof(Node));
    r=*L;
    r->next=NULL;
    //单链表初始化结束
    for(int i=1;i<n;i++)
    {
        p=(Node *)malloc(sizeof(Node));
        printf("pLeaSe Input No.%d Element.\n",i);
        scanf("%d",&p->data);
        p->next=NULL;//r要成为前继指针
        r->next=p;
        r=p; //更新尾节点为新插入的节点
        
    }
    r->next=NULL;
    return OK;
}








