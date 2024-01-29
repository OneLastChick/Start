#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
struct node{
    char ch;
    struct node* next;
};
int main()
{
    int c;
    struct node *head=NULL;
    struct node *p;
    printf("Input a string!\n");
    while(isspace(c=getchar()));
    for(;c!='\n'&&c!=EOF;c=getchar())
    {
        p=(struct node*)malloc(sizeof(struct node));
        p->ch=c;
        p->next=head;
        head=p;
    }
    for(p=head;p!=NULL;p=p->next)
    {
        printf("%c",p->ch);
    }
    printf("\n");
    return 0;
}