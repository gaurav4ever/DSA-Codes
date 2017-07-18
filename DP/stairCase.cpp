#include <iostream>
using namespace std;
#define max 100000
int chache[max];
int find(int n){
	if(n==1)return 1;
	if(n<=0)return 0;
	if(chache[n]!=-1)return chache[n];
	chache[n]=find(n-1)+find(n-2)+find(n-3);
	return chache[n];
}
int main(){
	int n;
	cout<<"Enter number of setps in stair case : ";
	cin>>n;
	for(int i=0;i<max;i++)chache[i]=-1;
	cout<<"Ans : "<<find(n);
	return 0;
}