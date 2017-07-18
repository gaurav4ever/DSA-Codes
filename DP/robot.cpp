// #include <iostream>
// using namespace std;
// #define max 10000
// int chache[max][max];
// int find(int a,int b){
// 	if(a==0 && b==0)return 1;
// 	if(chache[a][b]!=-1)return chache[a][b];
// 	chache[a][b]=find(a-1,b)+find(a,b-1);
// 	return chache[a][b];
// }
// int main(){
// 	int a,b;
// 	cout<<"Enter X : ";
// 	cin>>a;
// 	cout<<"Enter Y : ";
// 	cin>>b;
// 	for(int i=0;i<max;i++)for(int j=0;j<max;j++)chache[i][j]=-1;
// 	cout<<"Ans : "<<find(a,b);
// 	return 0;
// }
#include <iostream>
using namespace std;
#define max 1000
int chache[max];
int fac(long long int x){
	if(x==1 || x==0)return 1;
	if(chache[x]!=-1)return chache[x];
	chache[x]=x*fac(x-1);
	return chache[x];
}
int main(){
	int a,b;
	cout<<"Enter X : ";
	cin>>a;
	cout<<"Enter Y : ";
	cin>>b;
	for(int i=0;i<max;i++)chache[i]=-1;
	long long int ans_a=fac(a);
	for(int i=0;i<max;i++)chache[i]=-1;
	long long int ans_b=fac(b);
	for(int i=0;i<max;i++)chache[i]=-1;
	long long int ans_a_b=fac(a+b);
	cout<<ans_a_b<<" "<<ans_a*ans_b;
	// cout<<"Enter Y : ";
	// cin>>b;
	// for(int i=0;i<max;i++)chache[i]=-1;
	// cout<<"Ans : "<<fac(a+b)/(fac(a)*fac(b));
	return 0;
}