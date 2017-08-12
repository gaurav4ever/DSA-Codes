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
		n->next=start;
		start=n;
	}
}
void printlist(){
	struct node *n=new node;
	n=start;
	while(n!=NULL){
		printf("%d ->",n->data);
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
	return 0;
}