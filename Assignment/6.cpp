#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <cstring>
#include <vector>
#include <map>

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
struct tree* stringToIntAnsInsert(string s,struct tree *t){
	for(int i=0;i<s.length();i++){
		t=insert(t,s[i]-'0');
	}
	return t;
}
struct tree* min(struct tree *t){
	if(t->left==NULL)return t;
	return min(t->left);
}
struct tree* delete_ele(struct tree *t,int ele){
	if(ele<t->val){
		t->left=delete_ele(t->left,ele);
	}else if(ele>t->val){
		t->right=delete_ele(t->right,ele);
	}else if(t->left && t->right){
		struct tree *min_t;
		min_t=min(t->right);
		t->val=min_t->val;
		t->right=delete_ele(t->right,t->val);
	}else{
		struct tree *temp=t;
		if(t->left==NULL){
			return t->right;
		}else if(t->right==NULL){
			return t->left;
		}
		free(temp);
		return t;
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
int height(struct tree *t){
	if(t==NULL)return 0;
	else{
		int val1=height(t->left);
		int val2=height(t->right);

		if(val1>val2)return val1+1;
		else return val2+1;
	}
}
int height_node(struct tree *t,int x){
	if(t==NULL)return -1;
	else if(x==t->val)return 0;
	else{
		int val;
		if(x<t->val)
			return height_node(t->left,x)+1;
		else if(x>t->val)
			return height_node(t->right,x)+1;
	}
}
int LCA(struct tree *t,int x,int y){
	if(t==NULL)return -1;
	else{
		if(x<t->val && y<t->val)
			return LCA(t->left,x,y);
		else if(x>t->val && y>t->val)
			return LCA(t->right,x,y);
		else return t->val;
	}
}
void level_order(struct tree *t,int val){
	if(t==NULL)return;
	else if(val==1)cout<<t->val<<"->";
	else if(val>1){
		level_order(t->left,val-1);
		level_order(t->right,val-1);
	}
}
void level(struct tree *t,int h){
	for(int i=1;i<=h;i++)
		level_order(t,i);
}
int ml=0;
void leftView(struct tree *t,int level,int *ml){

	if(t==NULL)return;
	//cout<<"ml : "<<*ml<<" level : "<<level<<endl;
	if(*ml<level){
		cout<<t->val<<"->";

		*ml=level;
		
	}

	leftView(t->left,level+1,ml);
	leftView(t->right,level+1,ml);
}
void find(struct tree *t,int a,int b){
	int h_a=height_node(t,a);
	int h_b=height_node(t,b);
	int h_LCA=height_node(t,LCA(t,a,b));
	cout<<"Shortest Distance : "<<((h_a-h_LCA)+(h_a-h_LCA));
}
struct tree* mirror(struct tree *t){
	if(t->left->left==NULL)return t;
	else if(t->right->right==NULL)return t;
	else{
		mirror(t->left);
		mirror(t->right);

		struct tree *temp=t->left;
		t->left=t->right;
		t->right=temp;
	}
	return t;
}
void getVerticalDistance(struct tree *t,map< int,vector<int> > &m,int hd){
	if(t==NULL)return;

	m[hd].push_back(t->val);
	getVerticalDistance(t->left,m,hd-1);
	getVerticalDistance(t->right,m,hd+1);
}
void verticalPrint(struct tree *t){
	map< int,vector<int> >m;
	int hd=0;
	getVerticalDistance(t,m,hd);

	map< int,vector<int> >::iterator it;
	for(it=m.begin();it!=m.end();it++){
		for(int i=0;i<it->second.size();i++){
			cout<<it->second[i]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	struct tree *t=NULL;
	int repeat=1;
	while(repeat!=0){
		cout<<"1. Insert\n2. Delete\n3. Display\n4. Height\n5. Lowest Common Ancestor\n6. Level Order Traversal\n7. Shortest Distance between two nodes";
		cout<<"\n8. Height of Node\n9. Mirror Tree\n10. Print left View\n11. Vertical Print\n Choose : ";
		int x;cin>>x;
		switch(x){
			case 1:{
					string s;
					cout<<"Enter tree in pre order : ";cin>>s;
					t=stringToIntAnsInsert(s,t);
				}			
				break;

			case 2:{
					int del_ele;
					cout<<"Enter value to delete : ";cin>>del_ele;
					t=delete_ele(t,del_ele);
				}		
				break;

			case 3:		display(t);
						break;

			case 4:		cout<<"Height of the tree is : "<<height(t);
						break;

			case 5:{
					int a,b;
					cout<<"Enter first node value : ";cin>>a;
					cout<<"Enter first node value : ";cin>>b;
					cout<<"LCA : "<<LCA(t,a,b);
				}
				break;

			case 6:{
					int h=height(t);
					level(t,h);
				}
				break;

			case 7:{
					int a,b;
					cout<<"Enter first node value : ";cin>>a;
					cout<<"Enter first node value : ";cin>>b;
					find(t,a,b);
				}
				break;

			case 8:{
					int a;
					cin>>a;
					cout<<"Height of Node : "<<height_node(t,a);
				}
				break;

			case 9:		mirror(t);
						display(t);
						mirror(t);
						break;

			case 10:{
						//int ml=0;
						leftView(t,1,&ml);
				}	
						break;

			case 11:	verticalPrint(t);
						break;

			default:	cout<<"Invalid Choice!\n";
						break;
		}
		cout<<"\n\nPress 1 to continue or 0 to exit : ";
		cin>>repeat;
		cout<<"\n\n";
	}
	return 0;
}