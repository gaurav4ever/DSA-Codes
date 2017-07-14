#include <iostream>
#include <conio.h>
#include <limits.h>
using namespace std;

#define V 5
int min(int val[V],bool vertices[V]){
	int min=INT_MAX,pos=0;
	for(int i=0;i<V;i++){
		if(min>val[i] && vertices[i]==false){
			min=val[i];
			pos=i;
		}
	}
	return pos;
}
void prims(int path[V][V]){
	bool vertices[V];
	int val[V];
	int ans[V];
	for(int i=0;i<V;i++){
		vertices[i]=false;
		val[i]=INT_MAX;
	}
	val[0]=0;
	ans[0]=-1;
	for(int i=0;i<V-1;i++){
		int v=min(val,vertices);
		vertices[v]=true;
		for(int j=0;j<V;j++){
			if(path[v][j]!=0 && vertices[j]==false && path[v][j]<val[j]){
				val[j]=path[v][j];
				ans[j]=v;
			}
		}
	}

	for(int i=1;i<V;i++){
		cout<<ans[i]<<"->"<<i<<" Weight : "<<path[i][ans[i]]<<endl;
	}
}
int main(){
	int path[V][V] = {{0, 2, 0, 6, 0},
	                  {2, 0, 3, 8, 5},
	                  {0, 3, 0, 0, 7},
	                  {6, 8, 0, 0, 9},
	                  {0, 5, 7, 9, 0},
                 	};
    prims(path);
	return 0;
}
