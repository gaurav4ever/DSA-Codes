#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cin>>n;
	list<int> ll;

	while(n--){
		cin>>x;
		ll.push_back(x);
	}
	list<int>::iterator it;
	for(it=ll.begin();it!=ll.end();it++)
		cout<<*it<<" ";

	int ele;
	cout<<"\nEnter the element to be deleted: ";cin>>ele;
	ll.remove(ele);
	cout<<"The list after deletion: ";
	for(it=ll.begin();it!=ll.end();it++)
		cout<<*it<<" ";
	return 0;
}