#include <bits/stdc++.h>
using namespace std;
struct node{
	struct node *next;
	int data;
}*start;

void insert(int x){
	struct node *n=new node;
	n->data=x;
	n->next=NULL;

	if(start==NULL)start=n;
	else{
		struct node *t=start;
		while(t->next!=NULL){
			t=t->next;
		}
		t->next=n;
	}
}
void del(int ele){
	struct node *t=start;
	while(t!=NULL){
		if(t->data==ele){
			t->data=t->next->data;
			struct node *temp=t->next;
			delete(temp);
			t->next=t->next->next;
		}
	}
}
void printlist(){
	struct node *n=new node;
	n=start;
	while(n!=NULL){
		cout<<n->data<<" ";
		n=n->next;
	}
}
int main(){
	int n,x;
	cin>>n;
	start=NULL;
	while(n--){
		cin>>x;
		insert(x);
	}
	printlist();
	int ele;
	cout<<"Enter the element to be deleted: ";cin>>ele;
	del(ele);
	cout<<"The list after deletion: ";printlist();
	return 0;
}