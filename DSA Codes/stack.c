#include <conio.h>
#include <stdio.h>
struct stack
{
	int a[50];
	int front;

};
void push(struct stack *s,int *ele)
{
	if(s->top==99)printf("overflow!\n");
	else 
		{
			s->top++;
			s->a[s->top]=*ele;
		}
}
void pop(struct stack *s)
{
	if(s->top==-1)printf("underflow!\n");
	else {s->top--;printf("element deleted!\n");
}
void display(struct stack *s)
{
	int i;
	for(i=0;i<=s->top;i++)
	{
		printf("%d\n",s->a[i]);
	}
}
void main ()
{
	struct stack s;
	s.top=-1;
	int element,choice=1;
	while(choice==1)
	{
	printf("1. Push\n2. Pop\n3. Display\n4. Sort");
	char ch=getch();
	switch(ch)
	{
		case '1': 
					printf("\nenter element to push :");
					scanf("%d",&element);
					push(&s,&element);
					break;

		case '2':  	pop(&s);
					break;

		case '3':   printf("elements of the stack are : \n");
					display(&s);
					break;

		case '4':	sort(&s);
					break;					
					
		default :printf("wrong choise!\n");
					break;
	}
	printf("\npress 1 for repeat or break otherwise : ");
	scanf("%d",&choice);
	}
}
