#include <iostream>
#include <math.h>
using namespace std;
void powerSet(int set[],int n){
	int counter=pow(2,n);
	for(int i=0;i<counter;i++){
		int sum=0;
		for(int j=0;j<n;j++){
			if(i & 1<<j)
				{sum+=set[j];}
		}
		cout<<sum<<endl;
	}
}
int main(){
	int n;
	cout<<"Enter set size : ";
	cin>>n;
	int set[n];
	for(int i=0;i<n;i++)cin>>set[i];
	powerSet(set,n);
	return 0;
}