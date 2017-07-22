// Check for intermediate vertex distance

#include <iostream>
#include <conio.h>
#include <limits.h>
using namespace std;

#define V 4
#define INF 100
void fw(int path[V][V]){

	for(int v=0;v<V;v++){ // intermediate vertex
		for(int i=0;i<V;i++){
			for(int j=0;j<V;j++){
				if(path[i][v]+path[v][j]<path[i][j])
					path[i][j]=path[i][v]+path[v][j];
			}
		}
	}
}
int main(){
	int path[V][V] = { {0,   5,  INF, 10},
                        {INF, 0,   3, INF},
                        {INF, INF, 0,   1},
                        {INF, INF, INF, 0}
                      };
    fw(path);

    for(int i=0;i<V;i++){
    	for(int j=0;j<V;j++){
    		if(path[i][j]==INF)
    			cout<<"INF ";
    		else{
    			cout<<path[i][j]<<"   ";
    		}
    	}
    	cout<<endl;
    }
	return 0;
}
