#include <iostream>
#include <list>
#include <limits.h>
 
using namespace std;
class Graph{
	int V;
	list<int> *adj;
public:
	Graph(int x){
		this->V=x;
		adj=new list<int>[x];
	}
	void addEdge(int x,int y);
	bool cycleUtil(int x,bool y[],bool z[]);
	bool hasCycle();
};
void Graph::addEdge(int x,int y){
	adj[x].push_back(y);
}
bool Graph::cycleUtil(int v,bool visited[],bool restack[]){
	if(visited[v]==false){
		visited[v]=true;
		restack[v]=true;
		list<int>::iterator i;
		for(i=adj[v].begin();i!=adj[v].end();i++){
			if(!visited[*i] && cycleUtil(*i,visited,restack))
				return true;
			else if(restack[*i])
				return true;
		}
	}
	restack[v]=false;
	return false;
}
bool Graph::hasCycle(){
	bool *visited=new bool[V];
	bool *restack=new bool[V];
	for(int i=0;i<V;i++){
		visited[i]=restack[i]=false;
	}
	for(int i=0;i<V;i++){
		if(cycleUtil(i,visited,restack))
			return true;
	}
	return false;
}
int main()
{
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 0);
    if(g.hasCycle())
    	cout<<"Graph contain cycle";
    else cout<<"No Cycle";
    return 0;
}