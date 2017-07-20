#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	vector<int>a;
	a.push_back(4);
	a.push_back(9);
	a.push_back(12);
	a.push_back(1);
	a.push_back(3);

	//make_heap(a.begin(),a.end());

	vector<int>::iterator i;
	for(i=a.begin();i!=a.end();i++)
		cout<<*i<<" ";


	a.erase(remove(a.begin(), a.end(), 12), a.end());

	cout<<endl;
	make_heap(a.begin(),a.end(),greater<int>{});
	for(i=a.begin();i!=a.end();i++)
		cout<<*i<<" ";


	cout<<endl;
	cout<<a.back();
	return 0;
}