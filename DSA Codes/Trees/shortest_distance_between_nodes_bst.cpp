#include<conio.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
int count=0;
using namespace std;
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
int find_depth(tree *ca,int val)
{
	if(ca==NULL)return 0;
	else 
	{
		if(ca->info>val)
			{
				count++;
				find_depth(ca->left,val);
			}
		else if(ca->info<val)
			{
				count++;
				find_depth(ca->right,val);
			}	
		else return count;
	}
}
tree * lca(tree* root, int v1,int v2)
{

if(root==NULL)return NULL;
   else if(root->info>v1&&root->info>v2)
       return lca(root->left,v1,v2);
       else if(root->info<v1&&root->info<v2)
       return lca(root->right,v1,v2);
      return root;
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
	struct tree *t,*ca;
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
	int x,y,hx,hy;
	cout<<"enter two nodes : ";
	cin>>x>>y;
	cout<<"Common ancestor is :";
	ca=lca(t,x,y);
	cout<<ca->info;
	hx=find_depth(ca,x);count=0;cout<<"\ndepth of x : "<<hx;
	hy=find_depth(ca,y);count=0;cout<<"\ndepth of y : "<<hy;
	cout<<"\nDistance between "<<x<<" and "<<y<<" is : "<<hx+hy;
	getch();
	return 0;
}
