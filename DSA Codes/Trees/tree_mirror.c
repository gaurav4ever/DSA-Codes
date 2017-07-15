
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct tree
{
	int info;
	struct tree *left;
	struct tree *right;
};
struct tree *insert(struct tree *t,int x)
{
	if(t==NULL)
	{
		t=(struct tree*)malloc(sizeof(struct tree));
		t->info=x;
		t->left=t->right=NULL;
	}
	else if(x<t->info)
		t->left=insert(t->left,x);
	else if(x>t->info)
		t->right=insert(t->right,x);
	return t;
}
struct tree * mirror(struct tree *t)
{
	if(t==NULL)return t;
	else
	{
		mirror(t->left);
		mirror(t->right);
		struct tree *temp=t->left;
		t->left=t->right;
		t->right=temp;
	}
	return t;
}
void display(struct tree *root)
{
	if(root!=NULL)
	{
		printf("%d ",root->info);
		display(root->left);
		display(root->right);
	}
}
int main()
{
	struct tree *t;
	t=NULL;
   int i=0,c=1;
   while(c==1)
   {
   		int x;printf("enter the element in the tree : ");
   		scanf("%d",&x);
   		t=insert(t,x);
   		printf("1 to enter more or break otherwise .... : ");
   		scanf("%d",&c);
   }
   display(t);
   printf("\nafter conversion into mirror tree :");
   t=mirror(t);
   display(t);
	getch();
	return 0;
}
