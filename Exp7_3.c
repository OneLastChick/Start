#include "stdio.h"
#include "stdlib.h"
struct s_list
{
    int data;            /* 数据域 */
    struct s_list *next; /* 指针域 */
};
void create_list(struct s_list **headp, int *p);
int main()
{
    struct s_list *head = NULL, *p;
    int s[] = {1, 2, 3, 4, 5, 6, 7, 8, 0}; /* 0 为结束标记 */
    create_list(&head, s);     //edit1:传参应传二级指针
             /* 创建新链表 */
    p = head;                              /*遍历指针 p 指向链头 */
    while (p)
    {
        printf("%d\t", p->data); /* 输出数据域的值 */
        p = p->next;             /*遍历指针 p 指向下一结点 */
    }
    printf("\n");
    return 0;
}
void create_list(struct s_list **headp, int *p)
{
    struct s_list *loc_head = NULL, *tail,*tmp=NULL;
    if (p[0] == 0) /* 相当于*p==0 */
        ;
    else
    { /* loc_head 指向动态分配的第一个结点 */
        loc_head = (struct s_list *)malloc(sizeof(struct s_list));
        loc_head->data = *p++; /* 对数据域赋值 */
        tail = loc_head;       /* tail 指向第一个结点 */
        while (*p)
        { /* tail 所指结点的指针域指向动态创建的结点 */
            tmp = (struct s_list *)malloc(sizeof(struct s_list));
            tmp->data=*p++;
            tmp->next=loc_head;
            loc_head=tmp;
        }
        tail->next = NULL; /* 对指针域赋 NULL 值 */
    }
    *headp = loc_head; /* 使头指针 headp 指向新创建的链表 */
}
// （2）修改替换 create_list 函数，将其建成一个后进先出的链表，后进先出链表的头指针
// 始终指向最后创建的结点（链头），后建结点指向先建结点，先建结点始终是尾结点。
// 3. 程序设计