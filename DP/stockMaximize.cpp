#include <iostream>
using namespace std;
int main(){
	cout<<"Enter n : ";
	int n;
	cin>>n;
	int a[n];
	int b[n]={0};
	for(int i=0;i<n;i++)cin>>a[i];

	int m=0;
	for(int i=n-1;i>=0;i--){
		if(m<=a[i]){
			m=a[i];
			b[i]=1;
		}
	}
	int count=0,max=0;
	for(int i=0;i<n;i++){
		if(b[i]==0){
			max-=a[i];
			count++;
		}else if(b[i]==1){
			max+=a[i]*count;
			count=0;
		}
	}
	cout<<"Maximum stock is :"<<max;
	return 0;
}