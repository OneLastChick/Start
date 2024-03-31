#include "stdio.h"
#include "stdlib.h"
struct s_list
{
    int data;            /* ������ */
    struct s_list *next; /* ָ���� */
};
void create_list(struct s_list **headp, int *p);
int main()
{
    struct s_list *head = NULL, *p;
    int s[] = {1, 2, 3, 4, 5, 6, 7, 8, 0}; /* 0 Ϊ������� */
    create_list(&head, s);     //edit1:����Ӧ������ָ��
             /* ���������� */
    p = head;                              /*����ָ�� p ָ����ͷ */
    while (p)
    {
        printf("%d\t", p->data); /* ����������ֵ */
        p = p->next;             /*����ָ�� p ָ����һ��� */
    }
    printf("\n");
    return 0;
}
void create_list(struct s_list **headp, int *p)
{
    struct s_list *loc_head = NULL, *tail,*tmp=NULL;
    if (p[0] == 0) /* �൱��*p==0 */
        ;
    else
    { /* loc_head ָ��̬����ĵ�һ����� */
        loc_head = (struct s_list *)malloc(sizeof(struct s_list));
        loc_head->data = *p++; /* ��������ֵ */
        tail = loc_head;       /* tail ָ���һ����� */
        while (*p)
        { /* tail ��ָ����ָ����ָ��̬�����Ľ�� */
            tmp = (struct s_list *)malloc(sizeof(struct s_list));
            tmp->data=*p++;
            tmp->next=loc_head;
            loc_head=tmp;
        }
        tail->next = NULL; /* ��ָ���� NULL ֵ */
    }
    *headp = loc_head; /* ʹͷָ�� headp ָ���´��������� */
}
// ��2���޸��滻 create_list ���������佨��һ������ȳ�����������ȳ������ͷָ��
// ʼ��ָ����󴴽��Ľ�㣨��ͷ�����󽨽��ָ���Ƚ���㣬�Ƚ����ʼ����β��㡣
// 3. �������