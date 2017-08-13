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
void printlist(){
	struct node *n=new node;
	n=start;
	while(n!=NULL){
		cout<<n->data<<" ";
		n=n->next;
	}
}
void del(int ele){
	struct node *t=start;
	int flag=1;
	while(1){
		flag=1;
		while(t!=NULL){

			if(t->next->data==ele && t->next->next!=NULL){
				flag=0;
				t->next->data=t->next->next->data;
				t->next=t->next->next;
				struct node *temp=t->next;
				delete(temp);
				break;
			}else if(t->next->data==ele && t->next->next==NULL){
				flag=0;
				struct node *temp=t->next;
				delete(temp);
				t->next=NULL;
				break;
			}else{
				t=t->next;
			}
		
		}	
		
		printlist();
		cout<<endl;
		t=start;
		if(flag==1)break;
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
	cout<<"\nEnter the element to be deleted: ";cin>>ele;
	del(ele);
	cout<<"\nThe list after deletion: ";printlist();
	return 0;
}