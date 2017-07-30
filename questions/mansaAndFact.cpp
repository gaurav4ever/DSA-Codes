#include <iostream>
using namespace std;
int check(int val){

	int i=5,count=0;
	while(val/i>0){
		count+=val/i;
		i=i*5;
	}

	return count;
}
int find(int low,int high,int n){
	
	int mid=(low+high)/2;
    if(low>high)return high;

	//if(check(mid)==n)return mid;
    if(check(mid)<n)
        return find(mid+1,high,n);
	return find(low,mid-1,n);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int val=n*5;
		cout<<find(1,val,n)+1<<endl;
	}
	
	
	return 0;
}