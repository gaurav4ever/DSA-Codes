#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the value of n :";cin>>n;

	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];

	//sorting 
	int key,pos;
	for(int i=0;i<n-1;i++){
		key=a[i];
		pos=i;
		for(int j=i+1;j<n;j++){
			if(key>a[j]){
				pos=j;
				key=a[j];
			}
		}
		int temp=a[i];
		a[i]=a[pos];
		a[pos]=temp;
	}

	for(int i=0;i<n;i++)cout<<a[i]<<" ";
	return 0;
}