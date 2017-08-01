#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter rod length : ";
	cin>>n;
	int a[n];
	a[0]=0;
	for(int i=1;i<n;i++){
		cout<<"Profit for rod of length "<<i<<" : ";
		cin>>a[i];
	}
	int p[n+1][n+1]={0};

	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			p[i][j]=0;
		}
	}	


	for(int i=1;i<n;i++){
		for(int j=1;j<=n;j++){
			if(j>=i)
				p[i][j]=max(p[i-1][j],p[i][j-i]+a[i]);
			else 
				p[i][j]=p[i-1][j];
		}
	}

	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			cout<<p[i][j]<<" ";
		}
		cout<<endl;
	}	
	return 0;
}