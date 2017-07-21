#include <iostream>
using namespace std;
bool check(int x){
	int n=x | (x-1);
	if(n&(n+1))return true;
	return false;
}
int main(){
	int x;
	cin>>x;
	if(check(x))cout<<"True";
	else cout<<"False";
	return 0;
}