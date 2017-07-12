#include<conio.h>
#include<stdio.h>
struct tree
{
	int info;
	int used;
}node[100];
void buildtree(int x)
{
	int i;
	node[0].info=x;
	node[0].used=1;
	for(i=1;i<100;i++)
	node[i].used=0;
}
void insert(int x)
{
	int p,q;
	p=q=0;
	while((q<100)&&(node[q].used==1)&&(x!=node[p].info))
	{
		p=q;
		if(x<node[p].info)
		{
			q=2*p+1;
			node[q].info=x;
			node[q].used=1;
			p=q;
		}
		else
		{
			q=2*p+2;
			node[q].info=x;
			node[q].used=1;
			p=q;
		}
	}
}
main()
{
	int i,x,c;
	printf("enter element : ");
	scanf("%d",&x);
	buildtree(x);
	printf("want to enter more press 1 :");
	scanf("%d",&c);
	while(c==1)
	{
		scanf("%d",&x);
		insert(x);
		printf("1 for more or break otherwise .... : ");
		scanf("%d",&c);
	}
	for(i=0;i<10;i++)
		printf("%d ",node[i].info);
		getch();
}
