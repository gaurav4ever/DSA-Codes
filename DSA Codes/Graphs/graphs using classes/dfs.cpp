#include <iostream>
#include <conio.h>
#include <list>
#include <stack>

using namespace std;
class Graph{
	int V;
	list<int> *adj;
public:
	Graph(int x);
	void addEdge(int a,int b);
	void dfsUtil(int x,bool visited[]);
	void dfs(int x);
};
Graph::Graph(int x){
	this->V=x;
	adj=new list<int>[x];
}
void Graph::addEdge(int x,int y){
	adj[x].push_back(y);
}
void Graph::dfsUtil(int v,bool visited[]){
	visited[v]=true;
	cout<<v<<"->";
	list<int>::iterator i;  //iterator is a pointer
	for(i=adj[v].begin();i!=adj[v].end();i++){
		if(!visited[*i])
			dfsUtil(*i,visited);
	}
}
void Graph::dfs(int v){
	bool *visited=new bool[V];
	for(int i=1;i<=V;i++)
		visited[i]=false;

	dfsUtil(v,visited);
}
int main(){
	Graph g(4);
	g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    g.dfs(2);
	return 0;
}