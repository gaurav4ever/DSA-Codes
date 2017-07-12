#include<conio.h>
#include<stdio.h>

struct queue
{
	int a[50];
	int front,rear;
};
int input_cqueue(struct queue *q)
{
		int x;
	printf("\nenter a element to insert in the circular queue : ");
		scanf("%d",&x);

	if(q->rear==-1)
			q->rear=q->front=0;
	else if(q->rear==49&&q->front==0 || q->front==q->rear+1)
			{
				printf("\nOverflow!\n");
				return -1;
			}
	else q->rear++;

	q->a[q->rear]=x;
	return 0;
}
void delete_cqueue(struct queue *q)
{
	if(q->rear==q->front)
		{
	
			q->front=-1;
			q->rear=-1;
		}
	else if(q->front==-1)
			{
				printf("\nUnderflow!\n");
			}
	else
	{
	
		q->front++;		
	}
	
}
int display_cqueue(struct queue *q)
{
		int i;
		if(q->front==q->rear==-1)printf("\nqueue is empty! \n");
		else
		for(i=q->front;i<=q->rear;i++)
			printf("%d\n",q->a[i]);
	return 0;
}
int main()
{
	struct queue q;
	int n,i,del;
	int choise=1;
	q.front=-1;
	q.rear=-1;
	printf("\t\tcircular queue \n");
	while(choise==1)
	{
	printf("\nenter choise :\n1. to insert\n2. to delete \n3. To Display : ");
	char c;
 	c=getch();
	switch(c)
	{
		case '1':	
					
					i=input_cqueue(&q);
					if(i==0)printf("\nelement inserted. \n");
					break;
		case '2':	
					delete_cqueue(&q);
					break;
		case '3':
				display_cqueue(&q);
				break;
	default : printf("\nYou have enter a wrong choise :( ");
				break;
	}
	printf("\npress 1 to continue, press 0 to end : ");
	scanf("%d",&choise);
	}
return 0;
}

