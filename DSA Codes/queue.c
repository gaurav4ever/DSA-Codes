#include<conio.h>
#include<stdio.h>

struct queue
{
	int a[50];
	int front,rear;
};
int enqueue(struct queue *q)
{
		int x;
	if(q->rear==49)
		{printf("\nOverflow!\n");}
	else
	{

		printf("\nenter a element to insert in the queue : ");
		scanf("%d",&x);
		q->rear++;
		q->a[q->rear]=x;
	}
	return 0;
}
void dequeue(struct queue *q)
{
	if(q->rear==q->front)
		{
	
			q->front=0;
			q->rear=-1;
		}
	else{
	
		if(q->rear-q->front==1)
			{
				printf("\nUnderflow!\n");
			}
	else
	{
	
		q->front++;		
	}
	}
}
int display(struct queue *q)
{
		int i;
		if(q->front==q->rear+1)printf("\nqueue is empty! \n");
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
	q.front=0;
	q.rear=-1;
	while(choise==1)
	{
	printf("\nenter choise :\n1. to insert\n2. to delete \n3. To Display : ");
	char c;
 	c=getch();
	switch(c)
	{
		case '1':	
					
					i=enqueue(&q);
					if(i==0)printf("\nelement inserted. \n");
					break;
		case '2':	
					dequeue(&q);
					break;
		case '3':
				display(&q);
				break;
	default : printf("\nYou have enter a wrong choise :( ");
				break;
	}
	printf("\npress 1 to continue, press 0 to end : ");
	scanf("%d",&choise);
	}
return 0;
}

