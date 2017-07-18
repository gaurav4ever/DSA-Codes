#include <iostream>
using namespace std;
int find(int a[],int start,int end){
	
	if(start<end){
		int mid=(start+end)/2;
		if(a[mid]==mid)return mid;
		find(a,start,mid);
		find(a,mid+1,end);
	}
}
int main(){
	int n;
	cout<<"Length of array : ";cin>>n;
	int a[n]={10,9,8,7,6,3,2,5,6,3,6,8,5,66,3,4,16};
	cout<<find(a,0,n-1);
	return 0;
}