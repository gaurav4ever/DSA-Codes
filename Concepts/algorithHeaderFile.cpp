#include <bits/stdc++.h>
using namespace std;
// void display(int a[],int n){
// 	for(int i=0;i<n;i++)cout<<a[i]<<" ";
// 	cout<<endl;
// }
int main(){
	// int n=10;
	// int a[n];
	// for(int i=0;i<n;i++)a[i]=n-i;

	// int *it1=&a[0];
	// int *it2=&a[n];

	// sort(it1,it2); // pass pointer
	// display(a,n);

	// swap(a[1],a[7]); // pass the value
	// display(a,n);


	// cout<<find(it1,it2,7);

	vector<int> a(9);
	for(int i=1;i<10;i++)a[i]=i;

	vector<int>::iterator it;
	it=max_element(a.begin(),a.end());


	cout<<&it<<endl;
	// cout<<&max_element(a.begin(),a.end());

	return 0;
}