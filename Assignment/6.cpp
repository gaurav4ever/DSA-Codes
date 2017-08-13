#include <bits/stdc++.h>
using namespace std;

struct tree{
	int val;
	struct tree *left;
	struct tree *right;
};
struct tree* insert(struct tree* t,int ele){
	if(t==NULL){
		t=new tree;
		t->val=ele;
		t->left=t->right=NULL;
	}else{
		if(ele<t->val){
			t->left=insert(t->left,ele);
		}else{
			t->right=insert(t->right,ele);
		}
	}
	return t;
}

void display1(struct tree *t){
	if(t!=NULL){
		display1(t->left);
		cout<<t->val<<" ";
		display1(t->right);
	}
}
void display2(struct tree *t){
	if(t!=NULL){
		cout<<t->val<<" ";
		display2(t->left);
		display2(t->right);
	}
}
void display3(struct tree *t){
	if(t!=NULL){
		display3(t->left);
		display3(t->right);
		cout<<t->val<<" ";
	}
}
int main(){
	struct tree *t=NULL;
	int repeat=1;
	int x;
	while(repeat!=0){
		cout<<"Enter the element to be inserted in the tree:\n";
		cin>>x;
		t=insert(t,x);

		cout<<"Do you want to insert another element? ";
		string s;
		cin>>s;
		if(s=="YES" || s=="yes" || s=="Yes")repeat=1;
		else repeat=0;
	}

	cout<<"\nInorder Traversal : ";display1(t);
	cout<<"\nPreorder  Traversal : ";display2(t);
	cout<<"\nPostorder  Traversal : ";display3(t);
	return 0;
}