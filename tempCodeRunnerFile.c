#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	int i;
	struct node* head;
	head=(struct node*)malloc(sizeof(struct node));
	head->data=1;
	struct node *p;
	p=head;
	for(i=2;i<=n;i++)
	{
		p->next=(struct node*)malloc(sizeof(struct node));
	p->next->data=i;
	p=p->next;	
	}
	p->next=head;
	p=head;
	i=0;
    int count=0;
	while(p!=p->next)
	{
		i++;
		if(i==k-1)
		{	printf("%d",p->next->data);
			p->next=p->next->next;
            count++;
            if(count<n-1) putchar(' ');
            else putchar('\n');
			i=0;
		}
		p=p->next;
	}
	printf("%d",p->data);
	
}