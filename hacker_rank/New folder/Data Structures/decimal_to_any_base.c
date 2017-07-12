#include<conio.h>
#include<stdio.h>
struct stack
{
	char a[100];
	int top;
};
void push(struct stack *s,int *ele)
{
	int val=*ele;
	if(s->top==99)printf("overflow!\n");
	else 
		{
			s->top++;
			if(val>=10)
			s->a[s->top]=55+val;
			else s->a[s->top]=48+val;
		}
}
void display(struct stack *s)
{
	int i;
	for(i=s->top;i>=0;i--)
	{
		printf("%c",s->a[i]);
	}
}

int main()
{
	struct stack s;
	s.top=-1;
	int num;
	printf("enter decimal number : ");
	scanf("%d",&num);
	int base;
	printf("enter any base to convert the decimal number :");
	scanf("%d",&base);
	int val;val=num;
	while(num>0)
	{
		num=num%base;
		/*if(num>=10)
		{
			char ch;
			ch=55+num;
			push(&s,&num);
		}*/
		push(&s,&num);
		val/=base;
		num=val;
	}
	display(&s);
	return 0;
}
