#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
static void reverse(struct Node** head_ref)
{
    struct Node* prev   = NULL;
    struct Node* current = *head_ref;
    struct Node* next;
    while (current != NULL)
    {
        next  = current->next;  
        current->next = prev;   
        prev = current;
        current = next;
    }
    *head_ref = prev;
}
void push(struct Node** head_ref, int new_data){
    struct Node* new_node =new Node;
    new_node->data  = new_data;
    new_node->next=NULL;
    if(*head_ref==NULL){
    	(*head_ref)    = new_node;	
    }else{
    	struct Node *t=*head_ref;
    	while(t->next!=NULL){
    		t=t->next;
    	}
    	t->next=new_node;
    }
    
}
void printList(struct Node *head){
    struct Node *temp = head;
    while(temp != NULL)
    {
        printf("%d  ", temp->data);    
        temp = temp->next;  
    }
}   
int main(){
	int c=1;
	struct Node* head = NULL;
	while(c==1){
		int ele;
		cout<<"Enter the value:";
		cin>>ele;
		push(&head,ele);

		cout<<"Do you want to add another node? Type Yes/No : ";
		string s;
		cin>>s;
		if(s=="YES" || s=="yes" || s=="Yes")c=1;
		else c=0;
	}   
     
     cout<<"\n\nThe elements in the linked list are: ";
     printList(head);    
     reverse(&head);                      
     cout<<"\nReversed Linked list:";
     printList(head);    
     return 0;
}