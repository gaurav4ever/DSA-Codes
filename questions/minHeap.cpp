#include <iostream>
#include <conio.h>
using namespace std;
struct heap{
	int size;
	int *a;
};
void heapify(struct heap *heapp,int i){
	int large=i;
	int l=2*i+1;
	int r=2*i+2;
	if(l<heapp->size && heapp->a[l]<heapp->a[large])large=l;
	if(r<heapp->size && heapp->a[r]<heapp->a[large])large=r;
	if(large!=i){
		int temp=heapp->a[i];
		heapp->a[i]=heapp->a[large];
		heapp->a[large]=temp;
		heapify(heapp,large);
	}
}
struct heap* createHeap(int *a,int size){
	struct heap *heapp=new heap;
	heapp->size=size;
	heapp->a=a;
	for(int i=(heapp->size-1)/2;i>=0;i--){
		heapify(heapp,i);
	}

	return heapp;
}
struct heap* heap_sort(int *a,int size){
	struct heap *heapp=createHeap(a,size);
	return heapp;
}
struct heap* del_min(struct heap *heapp){
	heapp->a[0]=heapp->a[heapp->size-1];
	heapify(heapp,0);
	heapp->size-=1;
	return heapp;
}
int main(){
	int n;
	cout<<"enter the size of heap : ";
	cin>>n;
	int a[n];
	cout<<"\nEnter elements in heap : ";
	for(int i=0;i<n;i++)cin>>a[i];
	struct heap* heapp=heap_sort(a,n);

	cout<<"\nSorted Array : ";
	for(int i=0;i<heapp->size;i++)cout<<heapp->a[i]<<" ";

	heapp=del_min(heapp);

	cout<<"\nSorted Array : ";
	for(int i=0;i<heapp->size;i++)cout<<heapp->a[i]<<" ";
	return 0;
}