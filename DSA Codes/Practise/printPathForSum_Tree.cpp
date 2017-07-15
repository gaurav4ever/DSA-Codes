#include <iostream>
#include <conio.h>
#include <cstring>
#include <stack>
using namespace std;

stack<int> mStack;
int ssum=0;
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
struct tree* stringToIntAnsInsert(string s,struct tree *t){
	for(int i=0;i<s.length();i++){
		t=insert(t,s[i]-'0');
	}
	return t;
}
void display(){
	while(!mStack.empty()){
		cout<<mStack.top()<<"->";
		mStack.pop();
	}
}
void findSum(struct tree *root,int sum){
	if(root!=NULL){
		mStack.push(root->val);
		ssum+=root->val;
		if(ssum==sum){display();return;}
		findSum(root->left,sum);
		findSum(root->right,sum);

		ssum-=root->val;
		mStack.pop();
	}
}
int main(){
	struct tree *t=NULL;
	int repeat=1,k;
	string s;
	cout<<"Enter tree in pre order : ";cin>>s;
	t=stringToIntAnsInsert(s,t);
	cout<<"\n Enter sum : ";cin>>k;
	findSum(t,k);
	return 0;
}