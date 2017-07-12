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
void swap(struct tree *root)
{
	if(root==NULL)return ;
		struct tree *temp=root->left;
		root->left=root->right;
		root->right=temp;
}
void swap_depth(struct tree* root,int h,int k)
{
	if(root==NULL)return ;
	if(h%k==0)swap(root);
	swap_depth(root->left,h+1,k);
	swap_depth(root->right,h+1,k);
}
void inorder(struct tree * root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->info<<" ";
		inorder(root->right);
	}
}
int main()
{
	struct tree *p[1025]={NULL};
	int n,l,r;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(p[i]==NULL)
		{
			p[i]=add(i);
		}
		cin>>l>>r;
		if(l!=-1)
		{
			p[l]=add(l);
			p[i]->left=p[l];
		}
		if(r!=-1)
		{
			p[r]=add(r);
			p[i]->right=p[r];
		}
	}
	//cout<<endl<<p[1]->info;
	inorder(p[1]);
	int t,k;
	cin>>t;
	while(t--)
	{
		cin>>k;
		swap_depth(p[1],1,k);
		inorder(p[1]);
		cout<<endl;
	}
	return 0;
}
