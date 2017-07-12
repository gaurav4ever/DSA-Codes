#include <iostream>
#include <conio.h>
#include <set>
using namespace std;
int main(){
	multiset<int> set;
	multiset<int>::iterator it;

	int n;
	cout<<"Enter n : ";
	cin>>n;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		set.insert(x);
	}
	cout<<endl;
	for(it=set.begin();it!=set.end();it++){
		cout<<*it;
	}

	int a;
	cout<<"Enter ele to find : ";cin>>a;
	it=set.find(a);
	if(*it==a)set.erase(it);
	else cout<<"Not Found";


	cout<<endl;
	for(it=set.begin();it!=set.end();it++){
		cout<<*it;
	}

	return 0;
}