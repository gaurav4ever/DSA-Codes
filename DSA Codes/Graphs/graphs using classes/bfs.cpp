#include <iostream>
#include <conio.h>
#include <list>
#include <queue>

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
	void bfs(int x);
};
void Graph::addEdge(int x,int y){
	adj[x].push_back(y);
}
void Graph::bfs(int v){
	bool *visited=new bool[V];
	for(int i=1;i<=V;i++)visited[i]=false;

	queue<int> q;
	q.push(v);

	list<int>::iterator i;
	while(!q.empty()){
		int v=q.front();
		visited[v]=true;
		cout<<v<<"->";
		q.pop();
		for(i=adj[v].begin();i!=adj[v].end();i++)
			if(!visited[*i]){
				q.push(*i);
			}
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

    g.bfs(2);
}