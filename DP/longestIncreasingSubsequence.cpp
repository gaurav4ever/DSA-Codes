#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter size of array : ";
	cin>>n;
	int a[n],b[n];

	cout<<"Enter array";
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=1;
	}

	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[j]<a[i] && b[i]<b[j]+1){
				b[i]=b[j]+1;
				cout<<j<<" ";
			}
		}
	}
	cout<<endl;
	for(int i=0;i<n;i++)cout<<b[i]<<" ";
}
