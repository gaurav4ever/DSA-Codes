#include <iostream>
using namespace std;
int n;
int f[10000];
int count1=0,count2=0;
int fibo1(int x){
	count1++;
	if(x==0)return 0;
	if(x==1)return 1;
	if(f[x]!=0)return f[x];
	f[x]=fibo1(x-1) +fibo1(x-2);
	return f[x];
}
int fibo2(int x){
	count2++;
	if(x==0)return 0;
	if(x==1)return 1;
	return fibo2(x-1)+fibo2(x-2);
}
int main(){
	cout<<"Enter n to find nth term in finonacci series : ";
	cin>>n;
	cout<<n<<"th term is : "<<fibo1(n)<<endl;
	fibo2(n);
	cout<<"No of computations in 1 : "<<count1<<endl;
	cout<<"No of computations in 2 : "<<count2;
	return 0;
}