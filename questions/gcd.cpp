#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if(a==0 || b==0)return 0;
	if(a==b)return a;
	if(a>b)
		return gcd(a-b,b);
	return gcd(a,b-a);
}
int main(){
	int a=134324,b=2384;
	cout<<gcd(a,b);
	return 0;
}