#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
using namespace std;

int max(int a,int b){
	if(a>b)return a;
	return b;
}
int main(){
	int n,m;
	cout<<"Enter length of string 1 :  ";cin>>n;
	cout<<"Enter length of string 2 :  ";cin>>m;
	char s1[n+1],s2[m+1];
	cout<<"Enter string 1 : ";
	for(int i=1;i<=n;i++)cin>>s1[i];
		cout<<"Enter string 2 : ";
	for(int i=1;i<=m;i++)cin>>s2[i];
	
	int a[n+1][m+1]={0};

	for(int i=0;i<n+1;i++)
		for(int j=0;j<m+1;j++)
			a[i][j]=0;
	
	for(int i=1;i<n+1;i++){
		for(int j=1;j<m+1;j++){
			if(s1[i]==s2[j]){
				a[i][j]=1+a[i-1][j-1];
			}else{
				a[i][j]=max(a[i-1][j],a[i][j-1]);
			}
		}
	}

	for(int i=0;i<n+1;i++){
		for(int j=0;j<m+1;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}	

	cout<<"LCS : "<<a[n][m];
	return 0;
}