#include <iostream>
using namespace std;
int search(int a[],int l,int r,int ele){
	if(l>r)return -1;
	int mid=(l+r)/2;
	if(a[mid]==ele)return mid;
	if(a[mid]>a[l]){
		if(ele<=a[mid] && ele>=a[l])
			return search(a,l,mid-1,ele);
		else
			search(a,mid+1,r,ele);
	}else if(a[mid]<a[l]){
		if(ele>=a[mid] && ele<=a[r])
			return search(a,mid+1,r,ele);
		else
			return search(a,l,mid-1,ele); 
	}else if(a[mid]==a[l]){
		if(a[mid]==a[r]){
			int val=search(a,l,mid-1,ele);
			if(val==-1)
				search(a,mid+1,r,ele);
			else return val;	
		}else{
			return search(a,mid+1,r,ele);
		}
	}
	return -1;
}
int main(){
	int n;
	cout<<"Enter n :";cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[n];
	int ele;
	cout<<"Enter element to search : ";
	cin>>ele;
	cout<<"Element found at : "<<search(a,0,n-1,ele); 
	return 0;
}