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
	int bfs(int x);
};
void Graph::addEdge(int x,int y){
	adj[x].push_back(y);
}
int Graph::bfs(int v){
	int count=1;
	bool *visited=new bool[V];
	for(int i=1;i<=V;i++)visited[i]=false;

	queue<int> q;
	q.push(v);

	list<int>::iterator i;
	while(!q.empty()){
		int v=q.front();
		visited[v]=true;
		//cout<<v<<"->";
		count++;
		q.pop();
		for(i=adj[v].begin();i!=adj[v].end();i++)
			if(!visited[*i]){
				q.push(*i);
			}
	}
	return count;
}
int main(){
	Graph g(7);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(4, 1);
    g.addEdge(6, 4);
    g.addEdge(5, 6);
    g.addEdge(5, 2);
    g.addEdge(6, 0);
    int val,pos,max=0;
    for(int i=0;i<7;i++){
    	val=g.bfs(i);
    	if(val>max){max=val;pos=i;}
    }

    cout<<"Mother vertex is :"<<pos;
    
}