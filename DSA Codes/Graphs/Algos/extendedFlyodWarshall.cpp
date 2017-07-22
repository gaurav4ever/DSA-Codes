// Check for intermediate vertex distance

#include <iostream>
#include <conio.h>
#include <limits.h>
using namespace std;

#define V 3
#define INF 100
void fw(int path[V][V]){

	for(int v=0;v<V;v++){ // intermediate vertex
		for(int i=0;i<V;i++){
			for(int j=0;j<V;j++){
				if(path[i][j]==0)
					path[i][j]=path[i][v]+path[v][j]-path[v][v];
			}
		}
	}
}
int main(){
	int path[V][V] = {  {2,3,3},
                        {3,1,0},
                        {3,0,1},
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
