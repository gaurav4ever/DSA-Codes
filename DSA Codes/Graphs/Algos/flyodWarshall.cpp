// Check for intermediate vertex distance

#include <iostream>
#include <conio.h>
#include <limits.h>
using namespace std;

#define V 8
#define INF 10000
void fw(int path[V][V]){

	for(int v=0;v<V;v++){ // intermediate vertex
		for(int i=0;i<V;i++){
			for(int j=0;j<V;j++){
				if(path[i][v]+path[v][j]<path[i][j])
					path[i][j]=path[i][v]+path[v][j]-path[v][v];
			}
		}
	}
}
int main(){

	// int path[V][V] = { {0,   5,  INF, 10},
 //                        {INF, 0,   3, INF},
 //                        {INF, INF, 0,   1},
 //                        {INF, INF, INF, 0}
 //                      };


    int path[V][V] = {  {1,3,4,INF,INF,INF,INF,INF},
                        {3,2,INF,6,7,INF,INF,INF} ,
                        {4,INF,3,INF,INF,9,10,INF},
                        {INF,6,INF,4,9,INF,INF,INF},
                        {INF,7,INF,9,5,INF,INF,INF},
                        {INF,INF,9,INF,INF,6,INF,INF},
                        {INF,INF,10,INF,INF,INF,7,INF},
                        {INF,INF,INF,INF,INF,INF,INF,8}
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
