#include <iostream>
using namespace std;
int find(int a[],int start,int end){
	
	if(start>end)return -1;	
	int mid=(start+end)/2;
	if(a[mid]==mid)return mid;
	else if(a[mid]>mid)
		find(a,start,mid-1);
	else
		find(a,mid+1,end);
}
int main(){
	int n;
	cout<<"Length of array : ";cin>>n;
	int a[n]={-1,0,2,3w,5,6,7};
	cout<<find(a,0,n-1);
	return 0;
}