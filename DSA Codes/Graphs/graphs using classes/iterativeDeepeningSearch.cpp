#include <iostream>
#include <conio.h>
#include <list>
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
	bool idsUtil(int x,int y,int z);
	bool ids(int x,int y,int z);
};
void Graph::addEdge(int x,int y){
	adj[x].push_back(y);
}
bool Graph::idsUtil(int src,int target,int level){
	if(src==target)return true;
	if(level<=0)return false;

	list<int>::iterator i;
	for(i=adj[src].begin();i!=adj[src].end();i++){
		if(idsUtil(*i,target,level-1)==true)
			return true;
	}
	return false;
}
bool Graph::ids(int src,int target,int level){
	for(int i=0;i<=level;i++)
		if(idsUtil(src,target,i)==true)
			return true;
	return false;
}
int main(){
	Graph g(7);
	g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 5);
    g.addEdge(2, 6);

    int target = 9, maxDepth = 3, src = 0;
    if(g.ids(src,target,maxDepth)==true)
    	cout<<"Found";
    else cout<<"Not Found";
	return 0;
}