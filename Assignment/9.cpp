#include <iostream>
#include <cstring>
using namespace std;

#define ROW 100
#define COL 100

bool safe(int M[][COL],int i,int j,bool visited[][COL],int r,int c){
	
	return ((i>=0)&&(j>=0)&&(i<r)&&(j<c)&&(M[i][j])&&(!visited[i][j]));
}
void dfs(int M[][COL],bool visited[][COL],int i,int j,int r,int c){
	int row[]={-1,-1,-1,0,0,1,1,1};
	int col[]={-1,0,1,-1,1,-1,0,1};

	visited[i][j]=true;

	for(int k=0;k<8;k++){
		if(safe(M,i+row[k],j+col[k],visited,r,c))
			dfs(M,visited,i+row[k],j+col[k],r,c);
	}
}
int findInslands(int M[][COL],int r,int c){
	bool visited[ROW][COL];
	memset(visited,0,sizeof(visited));

	int count=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(M[i][j] && !visited[i][j]){
				dfs(M,visited,i,j,r,c);
				count++;
			}
		}
	}
	return count;
}
int main(){
	int r,c;
	cout<<"Enter number of rows: ";cin>>r;
	cout<<"Enter number of columns: ";cin>>c;
	cout<<"Enter the matrix:";

	int M[ROW][ROW];
	for(int i=0;i<r;i++)for(int j=0;j<c;j++)cin>>M[i][j]; 

    cout<<"Number of connected objects = "<<findInslands(M,r,c);
	return 0;
}