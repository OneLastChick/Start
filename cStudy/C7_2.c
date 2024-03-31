#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};

int main(void)
{
    int n;
    struct node*head=NULL;
    struct node*tail;
    struct node*p;
    printf("input a string:\n");
    if(scanf("%d",&n)!=EOF)
    {
        p=(struct node*)malloc(sizeof(struct node));
        p->data=n;
        p->next=NULL;
        head=tail=p;
    }
    while(scanf("%d",&n)!=EOF)
    {
        p=(struct node*)malloc(sizeof(struct node));
        p->data=n;
        p->next=NULL;
        tail=tail->next=p;
    }
}