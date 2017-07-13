#include <iostream>
#include <conio.h>
#include <list>
#include <stack>

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
	void tsUtil(int x,bool visited[],stack<int> &s);
	void ts();
};
void Graph::addEdge(int x,int y){
	adj[x].push_back(y);
}
void Graph::tsUtil(int v,bool visited[],stack<int> &s){
	visited[v]=true;
	list<int>::iterator i;
	for(i=adj[v].begin();i!=adj[v].end();i++){
		if(!visited[*i])
			tsUtil(*i,visited,s);
	}
	s.push(v);
}
void Graph::ts(){
	stack<int> s;
	bool *visited=new bool[V];
	for(int i=0;i<V;i++)visited[i]=false;

	for(int i=0;i<V;i++){
		if(visited[i]==false)
			tsUtil(i,visited,s);
	}

	while(!s.empty()){
		cout<<s.top()<<"->";
		s.pop();
	}
}
int main(){
	Graph g(6);
	g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);

    g.ts();

    return 0;
}