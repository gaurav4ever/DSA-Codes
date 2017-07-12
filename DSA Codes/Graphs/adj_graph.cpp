#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter total number of nodes : ";
	cin>>n;
	int a[n][n]={0},x,y,flag=1;
	for(int i=0;i<n;i++)for(int j=0;j<n;j++)a[i][j]=0;
	while(1){
		cout<<"Enter 2 nodes to connect";
		cin>>x>>y;
		a[x-1][y-1]=1;
		cout<<"Node Connected.";

		cout<<"\n\nContinue ? 1/0 : ";cin>>flag;
		if(flag==0)break;
	}

	cout<<"\nAdjencency Matrix of Graph is : \n";

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}