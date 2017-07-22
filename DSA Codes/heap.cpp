#include <iostream>
using namespace std;
int heap[1000000],heap_size=0;
void insert(int x){
	if(heap_size==0){
		heap_size++;
		heap[heap_size]=x;
		return;
	}else{
		heap_size++;
		heap[heap_size]=x;
		int index=heap_size;

		while(index>1){
			if(heap[index]<heap[index/2]){
				int temp=heap[index];
				heap[index]=heap[index/2];
				heap[index/2]=temp;
				index/=2;
			}else{
				break;
			}
		}
	}
}
void extractMin(){
	heap[1]=heap[heap_size];
	heap_size-=1;
	int index=1;
	while(1){

		int l=index*2;
		int r=index*2+1;	
		if(l<heap_size && heap[index]>heap[l]){
			int temp=heap[index];
			heap[index]=heap[l];
			heap[l]=temp;
			index=l;
		}else if(r<heap_size && heap[index]>heap[r]){
			int temp=heap[index];
			heap[index]=heap[r];
			heap[r]=temp;
			index=r;
		}else break;
	}
	
}
void display(){
	for(int i=1;i<=heap_size;i++)
		cout<<heap[i]<<"->";
}
int main(){
	int x=1;
	cout<<"******** MIN HEAP *************";
	while(x!=0){
		cout<<"\n1. Insert";
		cout<<"\n2. Extract Min";
		cout<<"\n3. Get Min";
		cout<<"\n4. Display";
		int c;
		cin>>c;
		switch(c){
			case 1:{
					int ele;
					cout<<"Enter element : ";
					cin>>ele;
					insert(ele);
			}break;

			case 2:{
					extractMin();
					cout<<"Min Extracted";
			}break;

			case 3:{
					cout<<"Min :"<<heap[1];
			}break;

			case 4:{
					display();
			}break;

			default:	cout<<"\n\nInvalid Choise";
						break;
		}

		cout<<"\n\n Press 1 to continue or 0 to break : ";
		cin>>x;
	}
	return 0;
}