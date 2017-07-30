#include <iostream>
using namespace std;
int count=0;
void printAll(char c[5],string p,int n,int k){
	if(k==0){
		cout<<p<<endl;
		count++;
		return ;
	}
	for(int i=0;i<n;i++){
		string np=p+c[i];
		printAll(c,np,n,k-1);
	}

}
int main(){
	char c[]={'a','e','i','o','u'};
	int k=4;
	printAll(c,"",5,k);
	cout<<"\nCount : "<<count;
	return 0;
}