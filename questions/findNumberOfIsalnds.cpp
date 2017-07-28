#include <iostream>
#include <cstring>
using namespace std;

#define ROW 5
#define COL 5

bool safe(int M[][COL],int i,int j,bool visited[][COL]){
	
	return ((i>=0)&&(j>=0)&&(i<ROW)&&(j<COL)&&(M[i][j])&&(!visited[i][j]));
}
void dfs(int M[][COL],bool visited[][COL],int i,int j){
	int row[]={-1,-1,-1,0,0,1,1,1};
	int col[]={-1,0,1,-1,1,-1,0,1};

	visited[i][j]=true;

	for(int k=0;k<8;k++){
		if(safe(M,i+row[k],j+col[k],visited))
			dfs(M,visited,i+row[k],j+col[k]);
	}
}
int findInslands(int M[][COL]){
	bool visited[ROW][COL];
	memset(visited,0,sizeof(visited));

	int count=0;
	for(int i=0;i<ROW;i++){
		for(int j=0;j<COL;j++){
			if(M[i][j] && !visited[i][j]){
				dfs(M,visited,i,j);
				count++;
			}
		}
	}
	return count;
}
int main(){
	int M[][COL]= {  {1, 1, 0, 0, 0},
			        {0, 1, 0, 0, 1},
			        {1, 0, 0, 1, 1},
			        {0, 0, 0, 0, 0},
			        {1, 0, 1, 0, 1}
    };
    cout<<"Total number of islands : "<<findInslands(M);
	return 0;
}