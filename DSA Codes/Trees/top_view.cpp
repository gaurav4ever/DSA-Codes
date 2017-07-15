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

void display(struct tree *root)
{
	if(root!=NULL)
	{
		printf("%d ",root->info);
		display(root->left);
		display(root->right);
	}
}
void left_side(tree *root)
{
    if(root->left!=NULL)
        left_side(root->left);
    printf("%d ",root->info);
}
void right_side(tree *root)
{
    printf("%d ",root->info);
    if(root->right!=NULL)
        right_side(root->right);
}
void top_view(tree * root)
{
    if(root!=NULL)
        {
            left_side(root);
            right_side(root->right);
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
	printf("\nTop View of the tree : ");
	//Top view of the Tree
	top_view(t);
	return 0;
}
