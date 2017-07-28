#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;

class Graph{
	int V;
	list< pair<int,int> > *adj;
public:
	Graph(int v){
		this->V=v;
		adj=new list< pair<int,int> >[v];
	}
	void addEdge(int x,int y,int w);
	bool checkPath(int src,int length);
	bool checkPathUtil(int src,int length,bool visited[]);
};
void Graph::addEdge(int x,int y,int w){
	adj[x].push_back(make_pair(y,w));
	adj[y].push_back(make_pair(x,w));
}
bool Graph::checkPathUtil(int src,int k,bool visited[]){
	if(k<0)return true;
	list< pair<int,int> >::iterator it;
	for(it=adj[src].begin();it!=adj[src].end();it++){
		int node=it->first;
		int weight=it->second;

		if(visited[node]==true)continue;
		if(weight>=k)return true;
		visited[node]=true;

		if(checkPathUtil(node,k-weight,visited))return true;

		visited[node]=false;
	}
	return false;
}
bool Graph::checkPath(int src,int k){
	bool visited[V];
	memset(visited,false,sizeof(visited));

	visited[src]=true;

	return checkPathUtil(src,k,visited);
}
int main(){
	int V = 9;
    Graph g(V);
    g.addEdge(0, 1, 4);
    g.addEdge(0, 7, 8);
    g.addEdge(1, 2, 8);
    g.addEdge(1, 7, 11);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 8, 2);
    g.addEdge(2, 5, 4);
    g.addEdge(3, 4, 9);
    g.addEdge(3, 5, 14);
    g.addEdge(4, 5, 10);
    g.addEdge(5, 6, 2);
    g.addEdge(6, 7, 1);
    g.addEdge(6, 8, 6);
    g.addEdge(7, 8, 7);

    int src=0,k=60;

    if(g.checkPath(src,k))cout<<"True";
    else cout<<"false";


	return 0;
}