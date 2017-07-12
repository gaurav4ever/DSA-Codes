#include<iostream>
using namespace std;
struct tree
{
	int info;
	struct tree *left,*right;
};
struct tree * add(int x)
{
	struct tree *ptr;
	ptr=new tree;
	ptr->info=x;
	ptr->left=ptr->right=NULL;
	return ptr;
}
void inorder(struct tree * root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->info<<"->";
		inorder(root->right);
	}
}
int main()
{
	struct tree *p[500000];
	for(int i=0;i<1024;i++)p[i]=NULL;
	int n,l,r;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(p[i]==NULL)
		{
			p[i]=add(i);
		}
			p[2*i]=add(2*i);
			p[i]->left=p[2*i];

			p[2*i+1]=add(2*i+1);
			p[i]->right=p[2*i+1];
	}
		
	inorder(p[1]);
	
	return 0;
}
