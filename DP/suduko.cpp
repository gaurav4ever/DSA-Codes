#include <iostream>
using namespace std;
#define ua 0
#define N 9
bool isSafe(int grid[N][N],int r,int c,int val){

	//check in row
	for(int i=0;i<N;i++)
		if(grid[r][i]==val)
			return false;

	//check in column
	for(int i=0;i<N;i++)
		if(grid[i][c]==val)
			return false;

	//check in box
	int r_c=r-r%3,c_c=c-c%3;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(grid[i+r_c][j+c_c]==val)
				return false;
		}
	}

	return true;
}
bool find(int grid[N][N],int &row,int &col){
	for(row=0;row<N;row++)
		for(col=0;col<N;col++)
			if(grid[row][col]==0)
				return true;

	return false;
}
bool solve(int grid[N][N]){
	int r,c;

	if(!find(grid,r,c))return true;

	for(int i=1;i<=9;i++){
		if(isSafe(grid,r,c,i)){
			grid[r][c]=i;
			if(solve(grid))return true;
			grid[r][c]=0;
		}
	}

	return false;
}
int main(){
	 int grid[N][N] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
	                  {5, 2, 0, 0, 0, 0, 0, 0, 0},
	                  {0, 8, 7, 0, 0, 0, 0, 3, 1},
	                  {0, 0, 3, 0, 1, 0, 0, 8, 0},
	                  {9, 0, 0, 8, 6, 3, 0, 0, 5},
	                  {0, 5, 0, 0, 9, 0, 6, 0, 0},
	                  {1, 3, 0, 0, 0, 0, 2, 5, 0},
	                  {0, 0, 0, 0, 0, 0, 0, 7, 4},
	                  {0, 0, 5, 2, 0, 6, 3, 0, 0}};
    if(solve(grid)){
    	cout<<"Solution Exist"<<endl;
    }
    else cout<<"Solution Does not exist"<<endl;

    for(int i=0;i<N;i++){
    		for(int j=0;j<N;j++){
    			cout<<grid[i][j]<<" ";
    		}
    		cout<<endl;
    	}
	return 0;
}