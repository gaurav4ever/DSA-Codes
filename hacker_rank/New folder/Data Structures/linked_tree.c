#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct tree
{
	int info;
	struct tree *left;
	struct tree *right;
};
struct tree * insert(struct tree *t,int x)
{
	if(t==NULL)
	{
		t=(struct tree*)malloc(sizeof(struct tree));
		t->info=x;
		t->right=t->left=NULL;
	}
	else
	{
		if(x<t->info)
	    	t->left=insert(t->left,x);
		else if(x>t->info)
	   	    t->right=insert(t->right,x);
	   	 
	}
	return t;
}
struct tree* min(struct tree *t)
{
	if(t==NULL)return t;
	else if(t->left==NULL)return t;
	else return (min(t->left));
}
struct tree* delete_tree(struct tree *t,int x)
{
	if(t==NULL)printf("Not found...\n");
	else
	{
		 if(x<t->info)
			t->left=delete_tree(t->left,x);
		else if(x>t->info)
			t->right=delete_tree(t->right,x);
		else if(t->left && t->right)
		{
			struct tree *temp;
			temp=min(t->right);
			t->info=temp->info;
			t->right=delete_tree(t->right,t->info);
		}
		else
		{
			struct tree *temp=t;
			if(t->left==NULL)
				t=t->right;
			else if(t->right==NULL)
				t=t->left;
				
			free(temp);
			return t;
		}
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
	int c;
	do{
		int x;
	printf("enter element in the tree :");
	scanf("%d",&x);
	t=insert(t,x);
	printf("1 for more or break otherwise .... : ");
	scanf("%d",&c);
	}while(c==1);
	display(t);
	printf("\ndo want to delete any node from the tree ? (y/n) : ");
	char ch=getch();
	if(ch=='y')
	{
		printf("\nenter the element you want to delete : ");
		int x;scanf("%d\n",&x); 
		t=delete_tree(t,x);
	}
	display(t);
	getch();
	return 0;
}
