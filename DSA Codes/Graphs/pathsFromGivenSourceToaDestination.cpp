#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
stack<int>ss;
stack<int>ss2;
class Graph{
	int V;
	list<int> *adj;
public:
	Graph(int v){
		this->V=v;
		adj=new list<int>[v];
	}
	void addEdge(int x,int y);
	void printAllPaths(int x,int y);
	void printUtil(int s,int d,bool visited[]);
};
void Graph::addEdge(int x,int y){
	adj[x].push_back(y);
}
void Graph::printUtil(int s,int d,bool visited[]){

	visited[s]=true;

	if(s==d){
		ss2=ss;
		while(!ss2.empty()){
			cout<<ss2.top()<<" ";
			ss2.pop();
		}

		cout<<endl;
	}else{
		list<int>::iterator it;
		for(it=adj[s].begin();it!=adj[s].end();it++){
			if(!visited[*it]){
				ss.push(*it);
				printUtil(*it,d,visited);
			}
		}	
	}
	ss.pop();
	visited[s]=false;
	return ;
}
void Graph::printAllPaths(int s,int d){
	bool visited[V];
	memset(visited,false,sizeof(visited));
	ss.push(s);
	printUtil(s,d,visited);
}
int main(){

	Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(0, 3);
    g.addEdge(2, 0);
    g.addEdge(2, 1);
    g.addEdge(1, 3);
 
    int s = 2, d = 3;
    cout << "Following are all different paths from " << s
         << " to " << d << endl;
    g.printAllPaths(s, d);
	return 0;
}