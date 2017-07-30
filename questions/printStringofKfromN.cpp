#include <iostream>
using namespace std;
void printAll(char c[5],string p,int n,int k){
	if(k==0){
		cout<<p<<endl;
		return ;
	}
	for(int i=0;i<n;i++){
		string np=p+c[i];
		printAll(c,np,n,k-1);
	}

}
int main(){
	char c[]={'a','e','i','o','u'};
	int k=3;
	printAll(c,"",5,k);
	return 0;
}