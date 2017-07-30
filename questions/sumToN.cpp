#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int count=0;
	int a[n+1]={0};

	for(int i=1;i<(n/2)+1;i++){
		a[i]+=1;
		int val=i;
		int j=i+1;
		while(j<=(n/2)+1){
			val+=j;
			count++;
			if(val>n)break;
			//cout<<val<<" ";
			a[val]+=1;
			j++;
		}
	}
	cout<<endl;
	cout<<"val : "<<a[n];
	cout<<endl;
	cout<<"iterations : "<<count;
	return 0;
}