#include <iostream>
using namespace std;
int main(){
	int n,m;
	cout<<"Enter n : ";
	cin>>n;
	cout<<"Enter total sum : ";
	cin>>m;
	int a[n],v[m+1]={0};
	v[0]=1;
	for(int i=0;i<n;i++){
		cin>>a[i];
		for(int j=a[i];j<=m;j++){
			v[j]=v[j]+v[j-a[i]];
		}
	}
	cout<<v[m];
}