#include <iostream>
#include <conio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <cstring>
using namespace std;
struct tree{
	int val;
	int h;
	struct tree *left;
	struct tree *right;
};
int height(struct tree *t){
	if(t==NULL)return 0;
	else{
		int val1=height(t->left);
		int val2=height(t->right);

		if(val1>val2)return val1+1;
		else return val2+1;
	}
}
struct tree* leftRotate(struct tree *t){
	struct tree *x=t->right;
	struct tree *y=x->left;
	x->left=t;
	t->right=y;

	x->h=height(x);
	t->h=height(t);

	return x;
}
struct tree* rightRotate(struct tree *t){
	struct tree* x=t->left;
	struct tree* y=x->right;
	x->right=t;
	t->left=y;

	x->h=height(x);
	t->h=height(t);

	return x;
}
struct tree* insert(struct tree* t,int ele){
	if(t==NULL){
		t=new tree;
		t->val=ele;
		t->h=1;
		t->left=t->right=NULL;
	}else{
		if(ele<t->val){
			t->left=insert(t->left,ele);
		}else if(ele > t->val){
			t->right=insert(t->right,ele);
		}else return t;

		t->h=height(t);

		int balance=height(t->left)-height(t->right);

		if(balance>1){
			if(ele < t->left->val)
				return rightRotate(t);
			else if(ele > t->left->val){
				t->left=leftRotate(t);
				return rightRotate(t);
			}
		}else if(balance<-1){
			if(ele > t->right->val)
				return leftRotate(t);
			else if(ele < t->right->val){
				t->right=rightRotate(t->right);
				return leftRotate(t);
			}
		}

	}
	return t;
}
struct tree* stringToIntAnsInsert(string s,struct tree *t){
	for(int i=0;i<s.length();i++){
		t=insert(t,s[i]-'0');
	}
	return t;
}
void display(struct tree *t){
	if(t!=NULL){
		display(t->left);
		cout<<t->val<<"->";
		display(t->right);
	}
}
struct tree* min(struct tree *t){
	while(t->left!=NULL){
		t=t->left;
	}
	return t;
}
struct tree* del(struct tree *t,int ele){
	if(t==NULL)return t;
	else{
		if(ele<t->val)
			t->left=del(t->left,ele);
		else if(ele>t->val)
			t->right=del(t->right,ele);
		else{
			if(t->right && t->left){
				struct tree *temp;
				temp=min(t->right);
				t->val=temp->val;
				t->right=del(t->right,temp->val);
			}else{
				struct tree *temp=t;
				if(t->left==NULL)
					t=t->right;
				else if(t->right==NULL) 
					t=t->left;

				free(temp);
				return t;
			}
		}
	}

	t->h=height(t);

	int balance=height(t->left)-height(t->right);

	if(balance>1){
		if(ele < t->left->val)
			return rightRotate(t);
		else if(ele > t->left->val){
			t->left=leftRotate(t);
			return rightRotate(t);
		}
	}else if(balance<-1){
		if(ele > t->right->val)
			return leftRotate(t);
		else if(ele < t->right->val){
			t->right=rightRotate(t->right);
			return leftRotate(t);
		}
	}

	return t;
}
int main(){
	struct tree *t=NULL;
	int repeat=1;
	while(repeat!=0){
		cout<<"1. Insert\n2. Display\n3. Delete";
		cout<<"\n Choose : ";
		int x;cin>>x;
		switch(x){
			case 1:{
					string s;
					cout<<"Enter tree in pre order : ";cin>>s;
					t=stringToIntAnsInsert(s,t);
				}			
				break;

			case 2:{
					display(t);
				}		
				break;

			case 3:{
					cout<<"Enter node value to delete : ";
					int x;cin>>x;
					t=del(t,x);
				}		
				break;

			default:	cout<<"Invalid Choice!\n";
						break;
		}
		cout<<"\n\nPress 1 to continue or 0 to exit : ";
		cin>>repeat;
		cout<<"\n\n";
	}
}