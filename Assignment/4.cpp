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
bool search(struct tree *t,int ele){
	if(t==NULL)return false;
	if(t->val==ele)return true;
	else if(ele>t->val)return search(t->right,ele);
	else if(ele<t->val)return search(t->left,ele);
	return false;
}
int main(){
	struct tree *t=NULL;
	int repeat=1;
	int x;
	while(repeat!=0){
		cout<<"Enter the key number:\n";
		cin>>x;
		t=insert(t,x);

		cout<<"Do you want to create another junction?\n";
		string s;
		cin>>s;
		if(s=="YES" || s=="yes" || s=="Yes")repeat=1;
		else repeat=0;
	}

	int ele;
	cout<<"Enter the key to be searched :\n";
	cin>>ele;
	if(search(t,ele))cout<<ele<<" found";
	else cout<<ele<<" not found";
	return 0;
}