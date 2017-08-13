#include <iostream>
using namespace std;
int main(){
	int n,m;
	cout<<"Enter the number of customer takes the tickets: ";
	cin>>n;
	if(n==0)cout<<"Invalid Number";
	else{
		cout<<"Enter the number of tickets served: ";
		cin>>m;

		cout<<"\nThe tickets in the system are:\n";
		for(int i=1;i<=n;i++)cout<<i<<" ";

		cout<<"\nThe served tickets are:\n";
		for(int i=1;i<=m;i++)cout<<i<<" ";

		if(n==m)cout<<"\nNo more tickets to be served ";
		else{
			cout<<"\nThe unserved tickets are:\n";
			for(int i=m+1;i<=n;i++)cout<<i<<" ";
		}	
	}
	
	return 0;
}