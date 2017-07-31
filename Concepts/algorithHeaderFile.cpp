#include <bits/stdc++.h>
using namespace std;
void display(int a[],int n){
	for(int i=0;i<n;i++)cout<<a[i]<<" ";
	cout<<endl;
}
int main(){
	int n=10;
	int a[n];
	for(int i=0;i<n;i++)a[i]=n-i;

	int *it1=&a[0];
	int *it2=&a[n];

	sort(it1,it2); // pass pointer
	display(a,n);

	swap(a[1],a[7]); // pass the value
	display(a,n);


	cout<<find(it1,it2,7);

	return 0;
}