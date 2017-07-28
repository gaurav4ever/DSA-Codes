// Gaurav Sharma
// 14BCE0248
#include <iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
	struct node *prev;
}*start,*end;

struct node* create(){
	struct node *ptr;
	ptr=new node;
	cout<<"enter the element : ";
	cin>>ptr->data;
	ptr->next=NULL;
	ptr->prev=NULL;
	return ptr;
}
void insert_beg(struct node *np){

	if(start==NULL){
		start=np;
		end=np;
		start->next=NULL;
		end->next=NULL;
	}else{
		np->next=start;
		start->prev=np;
		np->prev=NULL;
		start=np;
	}
}
void insert_end(struct node *np){

	if(start==NULL && end==NULL){
		start=np;
		end=np;
		end->next=NULL;
		end->next=NULL;
	}else{
		end->next=np;
		np->prev=end;
		np->next=NULL;
		end=np;	
	}
}
void insert_pos(struct node *np){
	struct node *p=start;
	int pos,i=0;
	cout<<"enter the position : ";cin>>pos;	
	while(i<pos-2)
	{
		start=start->next;
		i++;
	}
	start->next->prev=np;
	np->next=start->next;
	start->next=np;
	np->prev=start;
	
	start=p;
}
void del_beg(){
	if(start==NULL)cout<<"underflow!";
	else
	{
		struct node *temp=start;
		start=start->next;
		start->prev=NULL;
		delete(temp);
	}
}
void del_end(){
	if(start==NULL)cout<<"underflow!";
	else
	{
		struct node *temp_del=end;
		end=end->prev;
		delete(temp_del);
		end->next=NULL;
	}
}
void del_pos(){
	struct node *temp=start,*temp_del;
	int i=0,pos;
	cout<<"enter the position : ";cin>>pos;
	while(i<pos-1)
	{
		start=start->next;
		i++;
	}
	temp_del=start;
	start=start->prev;
	temp_del->next->prev=start;
	start->next=temp_del->next;
	delete(temp_del);
	start=temp;
}
bool search_ele(int ele){
	struct node *front=start;
	struct node *back=end;
	while(front!=back && front->next!=back){

		if(front->data==ele)return true;
		if(end->data==ele)return true;

		front=front->next;
		back=back->prev;
	}
	if(front->data==ele)return true;
	if(end->data==ele)return true;

	return false;
}
void reverse_list(){
	struct node *p,*curr=start;
	end=start;
	while(curr!=NULL){
		p=curr->prev;
		curr->prev=curr->next;
		curr->next=p;
		curr=curr->prev;
	}
	if(p!=NULL)start=p->prev;
	cout<<"\nList Reversed\n";
}
void display(){
	struct node *np=start;
	cout<<"\n";
	while(start!=NULL)
	{
		cout<<start->data<<"->";
		start=start->next;
	}
	start=np;
}
void display_rev(){
	struct node *np=end;
	cout<<"\n";
	while(np!=NULL)
	{
		cout<<np->data<<"->";
		np=np->prev;
	}
}
int main(){	
	start=NULL;
	end=NULL;
	struct node *head;
	int x=1;
	while(x==1)
	{
	cout<<"*******Doubly linked list*******\n\n";
	cout<<"1.Insertion at begining\n";
	cout<<"2.Insertion at the end\n";	
	cout<<"3.Insertion at a given position\n";
	cout<<"4.Deletion from begining\n";
	cout<<"5.Deletion from end\n";
	cout<<"6.Deletion from given position\n";
	cout<<"7.Search for an Element\n";
	cout<<"8.Reverse List\n";
	cout<<"9.Display\n";
	cout<<"10.Display in reverse";
	cout<<"\nChoose :  ";
	int ch;
	cin>>ch;
	switch(ch)
	{
		case 1:	cout<<"\ninsertion at begining\n";
					head=create();
					insert_beg(head);
					break;
		case 2:	cout<<"\ninsertion at the end\n";
					head=create();
					insert_end(head);
					break;
		case 3:	cout<<"\ninsertion at a given position";
					head=create();
					insert_pos(head);
					break;
		case 4:	cout<<"\ndeletion from begining \n";
					del_beg();
					break;
		case 5:	cout<<"\ndeletion from end\n";
					del_end();
					break;
		case 6:	cout<<"\ndeletion from given position :\n";
					del_pos();
					break;
		case 7:	{
						int ele;
						cout<<"\nEnter element to search :\n";
						cin>>ele;
						if(search_ele(ele))cout<<"Found";
						else cout<<"Not Found";
					}break;
		case 8:	reverse_list();
					break;
		case 9:	display();
					break;
		case 10:	display_rev();
					break;
		default:    cout<<"wrong choice! ....\n ";
					break;
	}
	head=NULL;
	cout<<"\n\npress 1 to enter more or break otherwise : ";	cin>>x;
	}

	return 0;
}