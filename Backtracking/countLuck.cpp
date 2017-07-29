#include <iostream>
using namespace std;
#define MAX 100
int findPaths(char arr[][MAX],int i,int j,int n,int m){
    int c=0;
    if(i-1>=0 && arr[i-1][j]=='.')c++;
    if(i+1<n && arr[i+1][j]=='.')c++;
    if(j-1>=0 && arr[i][j-1]=='.')c++;
    if(j+1<m && arr[i][j+1]=='.')c++;
    
    return c;
}
bool check(char arr[][MAX],int i,int j,int n,int m){
    if(i-1>=0 && arr[i-1][j]=='*')return true;
    if(i+1<n && arr[i+1][j]=='*')return true;
    if(j-1>=0 && arr[i][j-1]=='*')return true;
    if(j+1<m && arr[i][j+1]=='*')return true;
    return false;
}
int dfs(char arr[][MAX],int n,int m,int i,int j,int count){
    int a=0,b=0,c=0,d=0;
    arr[i][j]='X';
    if(arr[i][j]=='*')return count;
    if(findPaths(arr,i,j,n,m)>1)count++;
    if(check(arr,i,j,n,m))return count;
    
    
    if(i-1>=0 && arr[i-1][j]=='.')
        a=dfs(arr,n,m,i-1,j,count);
    if(a>0)
        return a;
    
    if(i+1<n && arr[i+1][j]=='.')
        b=dfs(arr,n,m,i+1,j,count);
    if(b>0)
        return b;
    
    if(j-1>=0 && arr[i][j-1]=='.')
        c=dfs(arr,n,m,i,j-1,count);
    if(c>0)
        return c;
    
    if(j+1<m && arr[i][j+1]=='.')
        d=dfs(arr,n,m,i,j+1,count);
    if(d>0)
        return d;
    
    return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		char arr[MAX][MAX];
		int s_i,s_j;

		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++){
				cin>>arr[i][j];
				if(arr[i][j]=='M'){
					s_i=i;
					s_j=j;
				}
			}

		int k;
		cin>>k;

		if(dfs(arr,n,m,s_i,s_j,0)==k)cout<<"Impressed"<<endl;
		else cout<<"Oops!"<<endl;
	}
	return 0;
}