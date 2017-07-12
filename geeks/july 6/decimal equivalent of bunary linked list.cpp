// program to find the middle element of linked list
#include<iostream>
#include<math.h>
using namespace std;
struct list{
	int ele;
	struct list *next;
}*start;
void compute(){
	list *end=start,*t=start;
	int n=0;
	while(end!=NULL){
		n++;
		end=end->next;
	}
	int i=n-1,sum=0;
	while(t!=NULL){
		if(t->ele!=0){
			sum+=(pow(2,i)*t->ele);
		}
		t=t->next;
		i--;
	}
	cout<<sum;
	
}
void show(){
	list *s=start;
	while(s!=NULL){
		cout<<s->ele<<"->";
		s=s->next;
	}
}
int main(){
	start=NULL;
	int x;
	int p=1;
	while(p!=0){
		list *ptr;
		ptr=new list;
		cout<<"eneter element in the linked list : ";
		cin>>x;
		ptr->ele=x;
		if(start==NULL){
			start=ptr;
			start->next=NULL;
		}
		else{
			ptr->next=start;
			start=ptr;
		}
		cout<<endl;
		cout<<"to enter more press 1\nto exit press 0";
		cin>>p;
	}
	show();
	compute();
}
