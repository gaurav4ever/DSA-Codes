#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=5,count=0;
	while(n/i>0){
		count+=n/i;
		i=i*5;
	}
	cout<<count;
	return 0;
}