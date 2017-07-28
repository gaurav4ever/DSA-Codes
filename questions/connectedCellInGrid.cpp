#include <iostream>
#include <cstring>
using namespace std;

#define ROW 10
#define COL 10
int counter=0;

bool safe(int M[][COL],int i,int j,bool visited[][COL],int n,int m){
	
	return ((i>=0)&&(j>=0)&&(i<n)&&(j<m)&&(M[i][j])&&(!visited[i][j]));
}
int dfs(int M[][COL],bool visited[][COL],int i,int j,int n,int m){
	int row[]={-1,-1,-1,0,0,1,1,1};
	int col[]={-1,0,1,-1,1,-1,0,1};

	visited[i][j]=true;
	counter++;

	for(int k=0;k<8;k++){
		if(safe(M,i+row[k],j+col[k],visited,n,m))
			dfs(M,visited,i+row[k],j+col[k],n,m);

	}
	return counter;
}
int findInslands(int M[][COL],int n,int m){
	bool visited[ROW][COL];
	memset(visited,0,sizeof(visited));

	int max=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(M[i][j] && !visited[i][j]){
				int temp=dfs(M,visited,i,j,n,m);
				counter=0;
				if(max<temp)max=temp;
			}
		}
	}
	return max;
}
int main(){
    int n,m;
    cin>>n>>m;
	int M[ROW][COL];
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>M[i][j];
    
    cout<<findInslands(M,n,m);
	return 0;
}