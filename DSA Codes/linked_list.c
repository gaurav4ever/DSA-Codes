#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
struct node
{
	struct node *next;
	int data;
}*start;
void insert(int x){
	struct node *n=(struct node *)malloc(1*sizeof(struct node));
	n->data=x;
	n->next=NULL;

	if(start==NULL)start=n;
	else{
		n->next=start;
		start=n;
	}
}
void printlist(){
	struct node *n=(struct node *)malloc(1*sizeof(struct node));
	n=start;
	while(n!=NULL){
		printf("%d ->",n->data);
		n=n->next;
	}
}
int main(){
	int i=0,x;
	start=NULL;
	while(i!=3){
		scanf("%d",&x);
		insert(x);
		i++;
	}
	printlist();
	return 0;
}