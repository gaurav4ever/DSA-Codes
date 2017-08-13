#include <bits/stdc++.h>
using namespace std;
#define max 10000
int a[max],top=0;
int main(){
	int n;
	cout<<"Enter the number of element elements to be pushed in the stack: ";
	cin>>n;

	int x,count=0;
	for(int i=0;i<n;i++){
		cout<<"Enter the element "<<i+1<<": "; 
		cin>>a[top++];
	}


	int mid;
	if(top%2==0)mid=top/2-1;
	else mid=top/2;
	cout<<"\nThe middle element is: "<<a[mid];
	cout<<"\nThe popped element is: "<<a[top-1];
	top--;
	return 0;
}