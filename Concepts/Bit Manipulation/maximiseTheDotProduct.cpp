#include <iostream>
#include <conio.h>
#include <limits.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n+1],b[m+1],c[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
		c[i]=a[i];
	}
	for(int i=0;i<m;i++)cin>>b[i];	
	int rem=n-m;

	while(rem--){
		int min=INT_MAX,pos=0;
		for(int i=0;i<n;i++){
			if(min>c[i] && c[i]!=-1){
				min=c[i];
				pos=i;
			}
		}
		c[i]=-1;
	}

	for(int i=0;i<n;i++)cout<<c[i]<<" ";

	return 0;
}