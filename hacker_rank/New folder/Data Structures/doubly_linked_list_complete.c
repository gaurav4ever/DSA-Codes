#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
}*start;
struct node* create()
{
	struct node *ptr;
	ptr=(struct node*)malloc(sizeof(struct node));
	printf("enter the element : ");
	scanf("%d",&ptr->data);
	ptr->next=NULL;
	ptr->prev=NULL;
	return ptr;
}
void insert_beg(struct node *np)
{
	if(start==NULL)
	{
		start=np;
		start->next=NULL;
	}
	else
	{
		np->next=start;
		start->prev=np;
		np->prev=NULL;
		start=np;
	}
}
void insert_end(struct node *np)
{
	struct node *p=start;
	while(start->next!=NULL)
		start=start->next;
	start->next=np;
	np->prev=start;
	np->next=NULL;
	start=p;
}
void insert_pos(struct node *np)
{
	struct node *p=start;
	int pos,i=0;
	printf("enter the position : ");scanf("%d",&pos);	
	while(i<pos-2)
	{
		start=start->next;
		i++;
	}
	start->next->prev=np;
	np->next=start->next;
	start->next=np;
	np->prev=start;
	
	start=p;
}
void del_beg()
{
	if(start==NULL)printf("underflow!");
	else
	{
		struct node *temp=start;
		start=start->next;
		start->prev=NULL;
		free(temp);
	}
}
void del_end()
{
	if(start==NULL)printf("underflow!");
	else
	{
		struct node *temp=start,*temp_del;
			while(start->next!=NULL)start=start->next;
			temp_del=start;
			start=start->prev;
			free(temp_del);
			start->next=NULL;
			start=temp;
	}
}
void del_pos()
{
	struct node *temp=start,*temp_del;
	int i=0,pos;
	printf("enter the position : ");scanf("%d",&pos);
	while(i<pos-1)
	{
		start=start->next;
		i++;
	}
	temp_del=start;
	start=start->prev;
	temp_del->next->prev=start;
	start->next=temp_del->next;
	free(temp_del);
	start=temp;
}
void display()
{
	struct node *np=start;
	printf("\n");
	while(start!=NULL)
	{
		printf("%d->",start->data);
		start=start->next;
	}
	start=np;
}
void main()
{	start=NULL;
	struct node *head;
	int x=1;
	while(x==1)
	{
	printf("doubly linked list\n\n");
	printf("1.insertion at begining\n");
	printf("2.insertion at the end\n");	
	printf("3.insertion at a given position\n");
	printf("4.deletion from begining\n");
	printf("5.deletion from end\n");
	printf("6.deletion from given position\n");
	printf("7.display ");
	char ch=getch();
	switch(ch)
	{
		case '1':	printf("\ninsertion at begining\n");
					head=create();
					insert_beg(head);
					break;
		case '2':	printf("\ninsertion at the end\n");
					head=create();
					insert_end(head);
					break;
		case '3':	printf("\ninsertion at a given position");
					head=create();
					insert_pos(head);
					break;
		case '4':	printf("\ndeletion from begining \n");
					del_beg();
					break;
		case '5':	printf("\ndeletion from end\n");
					del_end();
					break;
		case '6':	printf("\ndeletion from given position :\n");
					del_pos();
					break;
		case '7':	display();
					break;
		default:    printf("wrong choice! ....\n ");
					break;
	}
	printf("\n%d",start->data);head=NULL;
	printf("press 1 to enter more or break otherwise : ");	scanf("%d",&x);
	}
}
