// program to find the middle element of linked list
#include<iostream>
#include<math.h>
using namespace std;
struct list{
	int ele;
	struct list *next;
};
list *merge(list *a,list *b){
	list *head;
	if(a==NULL)head=b;
	else if(b==NULL)head=a;
	else if(a->ele<b->ele){
		head=a;
		head->next=merge(a->next,b);
	}
	else{
		head=b;
		head->next=merge(a,b->next);
	}
	return head;
}
void show(list *s){
	while(s!=NULL){
		cout<<s->ele<<"->";
		s=s->next;
	}
	cout<<endl;
}
list *newNode(int data){
	list *ptr=new list;
	ptr->ele=data;
	ptr->next=NULL;
	return ptr;
}
int main(){

	int n=4,k=3;
	
	list* arr[k];
	
	 arr[0] = newNode(1);
    arr[0]->next = newNode(3);
    arr[0]->next->next = newNode(5);
    arr[0]->next->next->next = newNode(7);
    show(arr[0]);
 
    arr[1] = newNode(2);
    arr[1]->next = newNode(4);
    arr[1]->next->next = newNode(6);
    arr[1]->next->next->next = newNode(8);
    show(arr[1]);
 
    arr[2] = newNode(0);
    arr[2]->next = newNode(9);
    arr[2]->next->next = newNode(10);
    arr[2]->next->next->next = newNode(11);
	show(arr[2]);
	int j=1;
	while(j<k){
		arr[0]=merge(arr[0],arr[j]);
		j++;
	}
	show(arr[0]);
}
