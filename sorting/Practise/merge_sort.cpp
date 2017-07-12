#include <iostream>
#include <conio.h>
using namespace std;

void merge(int a[],int low,int mid,int high){
	int k=low,temp[100];
	int i=low,j=mid+1;
	while(i<=mid && j<=high){
		if(a[i]<a[j])
			temp[k++]=a[i++];
		else temp[k++]=a[j++];
	}
	while(i<=mid)temp[k++]=a[i++];
	while(j<=high)temp[k++]=a[j++];

	for(int i=low;i<=high;i++){
		temp[i]=a[i];
	}
}
void partition(int a[],int low,int high){
	int mid;
	if(low<high){
		mid=(low+high)/2;
		partition(a,low,mid);
		partition(a,mid+1,high);
		merge(a,low,mid,high);
	}
}
int main(){
	int n;
	cout<<"Enter the Value of N : ";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];

	partition(a,0,n-1);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}