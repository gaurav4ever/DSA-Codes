#include <iostream>
#include <conio.h>
using namespace std;
int n;
void swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
int pivot(int a[],int low, int high){
	int pivot=a[high];
	int p=low-1;
	for(int i=low;i<high;i++){
		if(a[i]<=pivot){
			p++;
			swap(&a[p],&a[i]);
		}
	}
	swap(&a[p+1],&a[high]);
	for(int i=0;i<n;i++)cout<<a[i]<<" ";
		cout<<endl;
	return p+1;
}
void quickSort(int a[],int low,int high){
	if(low<high){
		int p=pivot(a,low,high);
		quickSort(a,low,p-1);
		quickSort(a,p+1,high);
	}
}
int main(){
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
		cout<<endl;
	for(int i=0;i<n;i++)cout<<a[i]<<" ";
		cout<<endl;
	quickSort(a,0,n-1);
	
	getch();
	return 0;
}