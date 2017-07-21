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
	if(l<heapp->size && heapp->a[l]>heapp->a[large])large=l;
	if(r<heapp->size && heapp->a[r]>heapp->a[large])large=r;
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
	int k=heapp->size;
	while(heapp->size>1){
		int temp=heapp->a[0];
		heapp->a[0]=heapp->a[heapp->size-1];
		heapp->a[heapp->size-1]=temp;
		heapp->size-=1;
		heapify(heapp,0);
	}
	heapp->size=k;
	return heapp;
}
struct heap* del(struct heap *heapp){
	heapp->a[0]=heapp->a[heapp->size-1];
	heapify(heapp,0);

	int k=heapp->size;
	while(heapp->size>1){
		int temp=heapp->a[0];
		heapp->a[0]=heapp->a[heapp->size-1];
		heapp->a[heapp->size-1]=temp;
		heapp->size-=1;
		heapify(heapp,0);
	}
	heapp->size=k;
	heapp->size-=1;
	return heapp;
}
struct heap* insert(struct heap *heapp,int ele){
	heapp->a[heapp->size]=ele;
	heapp->size+=1;

	for(int i=(heapp->size-1)/2;i>=0;i--){
		heapify(heapp,i);
	}

	int k=heapp->size;
	while(heapp->size>1){
		int temp=heapp->a[0];
		heapp->a[0]=heapp->a[heapp->size-1];
		heapp->a[heapp->size-1]=temp;
		heapp->size-=1;
		heapify(heapp,0);
	}
	heapp->size=k;
	return heapp;
}
int main(){
	int n,m;
	cin>>n>>m;
	int a[100001];
	for(int i=0;i<n;i++)cin>>a[i];

	struct heap *heapp=heap_sort(a,n);

	

	while(1){
		cout<<"\nSorted Array : ";
		for(int i=0;i<heapp->size;i++)cout<<heapp->a[i]<<" ";

		int min1=heapp->a[0];
		if(min1<m){
			heapp=del(heapp);
			int min2=heapp->a[0];
			del(heapp);
			int new_val=min1+2*min2;
			heapp=insert(heapp,new_val);
		}else break;
	}

	return 0;
}