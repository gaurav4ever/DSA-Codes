#include <iostream>
using namespace std;
#define max 100
int n;
bool canPlace(int a[max][max],int r,int c){
	for(int i=0;i<c;i++)
		if(a[r][i]==1)return false;

	for(int i=r,j=c;i>=0,j>=0;i--,j--)
		if(a[i][j]==1)return false;

	for(int i=r,j=c;i<n,j>=0;i++,j--)
		if(a[i][j]==1)return false;	

	return true;
}
bool queen(int a[max][max],int c){

	if(c>=n)return true;

	for(int i=0;i<n;i++){
		if(canPlace(a,i,c)){
			a[i][c]=1;
			if(queen(a,c+1))return true;
			a[i][c]=0;
		}
	}

	return false;
}
int main(){
	cout<<"Enter board size : ";
	cin>>n;
	int a[max][max]={0};
	if(queen(a,0))cout<<"Solution Exist";
	else cout<<"Solution Does not Exist";
	cout<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}