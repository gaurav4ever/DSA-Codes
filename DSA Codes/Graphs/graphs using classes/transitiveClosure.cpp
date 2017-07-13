#include <iostream>
#include <conio.h>
#include <list>
#include <stack>
using namespace std;

class Graph{
	int V;
	bool **tc;
	list<int> *adj;
public:
	Graph(int x){
		this->V=x;
		adj=new list<int>[x];
		tc=new bool*[x];
		for(int i=0;i<V;i++){
			tc[i]=new bool[x];

			for(int j=0;j<V;j++)
				tc[i][j]=false;	
		}
	}
	void addEdge(int x,int y);
	void dfsUtil(int x,int y);
	void dfs();
};
void Graph::addEdge(int x,int y){
	adj[x].push_back(y);
}
void Graph::dfsUtil(int v,int w){
	tc[v][w]=true;
	
	list<int>::iterator i;
	for(i=adj[w].begin();i!=adj[w].end();i++)
		if(!tc[v][*i])
			dfsUtil(v,*i);
}
void Graph::dfs(){
	for(int i=0;i<V;i++){
		dfsUtil(i,i);	
	}
	for(int i=0;i<V;i++){
		for(int j=0;j<V;j++){
			cout<<tc[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    g.dfs();
}