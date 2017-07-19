#include <iostream>
using namespace std;
int length=0;
struct node{
	int val;
	struct node *next;
	struct node *prev;
};
struct node* insertb(struct node *d,int ele){
	struct node *temp=new node;
	temp->val=ele;
	temp->next=temp->prev=NULL;

	if(d==NULL){
		d=temp;
	}else{
		temp->next=d;
		d->prev=temp;
		d=temp;
	}
	length++;

	return d;
}
struct node* inserte(struct node *d,int ele){
	struct node *temp=new node;
	temp->val=ele;
	temp->next=temp->prev=NULL;

	if(d==NULL){
		d=temp;
	}else{
		struct node *t=d;
		while(t->next!=NULL){
			t=t->next;
		}
		t->next=temp;
		temp->prev=t;
	}
	length++;

	return d;
}
struct node* insertp(struct node *d,int ele,int pos){
	if(pos==1)insertb(d,ele);
	else if(pos==length)inserte(d,ele);
	else if(pos>length)cout<<"Error"<<endl;
	else{
		struct node *temp=new node;
		temp->val=ele;
		temp->next=temp->prev=NULL;

		if(d==NULL){
			d=temp;
		}else{
			int move=pos-2;
			struct node *t=d;
			while(move--)t=t->next;

			t->next->prev=temp;
			temp->next=t->next;
			t->next=temp;
			temp->prev=t;
		}
	}
	length++;

	return d;
}
void search(struct node *d,int ele){
	struct node *t=d;
	int k=0;
	while(t!=NULL){
		k++;
		if(t->val==ele){
			cout<<"Found at pos : "<<k<<endl;
			break;
		}
		t=t->next;
	}
}
void reverse(struct node *d){
	if(d==NULL)return;
	reverse(d->next);
	cout<<d->val<<"->";

}
struct node* makeReverse(struct node *d){
	struct node *p=NULL,*c=d;
	while(c!=NULL){
		p=c->prev;
		c->prev=c->next;
		c->next=p;
		c=c->prev;
	}
	if(p!=NULL)d=p->prev;
	return d;
}
void display(struct node *d){
	struct node *t=d;
	cout<<"\n Length : "<<length<<endl;
	while(t!=NULL){
		cout<<t->val<<"->";
		t=t->next;
	}
}
int main(){
	struct node *dl=NULL;
	cout<<"****** Doubly Linked List ******"<<endl;
	int x=1;
	while(x!=0){
		cout<<"1. Insertion Begining."<<endl;
		cout<<"2. Insertion End."<<endl;
		cout<<"3. Insertion at position."<<endl;
		cout<<"4. Deletion."<<endl;
		cout<<"5. Searching."<<endl;
		cout<<"6. Print in Reverse."<<endl;
		cout<<"7. Reverse the list."<<endl;
		cout<<"8. Display."<<endl;
		cout<<"Choose : ";
		int c;
		cin>>c;
		switch(c){
			case 1:{
				int ele;
				cin>>ele;
				dl=insertb(dl,ele);
			}break;

			case 2:{
				int ele;
				cin>>ele;
				dl=inserte(dl,ele);
			}break;

			case 3:{
				int ele,pos;
				cout<<"Enter Element : ";cin>>ele;
				cout<<"Enter position : ";cin>>pos;
				dl=insertp(dl,ele,pos);
			}break;

			case 5:{
				int ele;
				cout<<"Enter element to search for : ";
				cin>>ele;
				search(dl,ele);
			}

			case 6:	reverse(dl);
					break;

			case 7:	dl=makeReverse(dl);
					break;

			case 8: display(dl);
					break;

			default: cout<<"Invalid Choice!\n";
					break;
		}
		cout<<"\nPress 1 to choose again and 0 to break : ";cin>>x;
	}
	return 0;
}