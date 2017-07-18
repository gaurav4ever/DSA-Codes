#include <iostream>
#include <math.h>
using namespace std;
void powerSet(char set[],int n){
	int counter=pow(2,n);
	for(int i=0;i<counter;i++){
		for(int j=0;j<n;j++){
			if(i & 1<<j)
				cout<<set[j];
		}
		cout<<endl;
	}
}
int main(){
	int n;
	cout<<"Enter set size : ";
	cin>>n;
	char set[n];
	for(int i=0;i<n;i++)cin>>set[i];
	powerSet(set,n);
	return 0;
}