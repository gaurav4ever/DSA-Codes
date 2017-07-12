#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int element;
	struct Node *next;
}*start,*ptr;
struct Node* create()
{
	struct Node *ptr=(struct Node *)malloc(1*sizeof(struct Node));
	int x;
	printf("enter element : ");scanf("%d",&x);
	ptr->element=x;
	ptr->next=NULL;
return ptr;
}
void push_beg(struct Node *ptr)
{
	if(start==NULL)start=ptr;
	else
	{
		ptr->next=start;
		start=ptr;
	}	
}
void push_end(struct Node *ptr)
{
	struct Node *last=start;
	if(start==NULL)start=ptr;
	else 
		{
			while(start->next!=NULL)
				start=start->next;
			start->next=ptr;
				start=last;
		}		
}
void push_any(struct Node *ptr)
{
	int pos;
	printf("enter the position : ");scanf("%d",&pos);
	if(start==NULL)start=ptr;
    else
	{
		if(pos==0)
    	{
       		ptr->next=start;
        	start=ptr;
    	}  
   		else
    	{	int i;
			struct Node *temp=start;
    		for(i=0;i<pos-2;i++)
        	{
            	start=start->next;
        	}	
    		ptr->next=start->next;
    		start->next=ptr;
			start=temp;
    	}
	}
}
void del_beg()
{
	struct Node *temp;
	temp=start;
	start=start->next;
	free(temp);
}
void del_end()
{
	struct Node *np=start,*temp;
	while(start->next->next!=NULL)
		{
			start=start->next;
		}
	temp=start->next;
	start->next=NULL;
	free(temp);
	start=np;
}
void del_any()
{
	struct Node *np=start,*temp;
	int pos,i=0;
	printf("\nenter the position from where u want to delete : ");scanf("%d",&pos);
	while(i<pos-2)
	{
			start=start->next;
			i++;
	}
	temp=start->next;
	start->next=temp->next;
	free(temp);
	start=np;
}
void display()
{
	struct Node *temp=start;
	while(start!=NULL)
	{
		printf("%d->",start->element);
		start=start->next;
	}
	start=temp;
}
int  main()
{
	start=NULL;
	struct Node *temp;
	int c=1;
	printf("\t\t\t\tLinked List\n\n");
while(c==1)
{	
	printf("1. insertion at begining.\n");
	printf("2. insertion at end.\n");
	printf("3. insertion at any position.\n");
	printf("4. del begining\n");
	printf("5.del from end\n");
	printf("6.del from any position\n");
	printf("7. display.\n");
	char ch=getch();
	switch(ch)
	{
		case '1':	temp=create(ptr);
					push_beg(temp);
					break;
		case '2':	temp=create(ptr);
					push_end(temp);
					break;
		case '3': 	temp=create(ptr);
					push_any(temp);
					break;
		case '4':	printf("\ndeletion from begining ....\n");
					del_beg();
					break;
		case '5':	printf("\ndeletion from end ....\n");
					del_end();
					break;
		case '6':	printf("\ndeletion from any position ....\n");
					del_any();
					break;
		case '7':	display();
					break;
		default:printf("\nwrong choice!!\n");
				break;
	}
	printf("\npress 1 to continue or break otherwise... ");scanf("%d",&c);
}
return 0;
}
