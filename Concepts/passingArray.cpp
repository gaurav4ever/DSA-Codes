#include <bits/stdc++.h>
using namespace std;
void func(int n,vector< vector<int> > &a){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
}
int main(){
	int n;
	cin>>n;

	vector< vector<int> > a;
	for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>a[i][j];
	func(n,a);
	return 0;
}