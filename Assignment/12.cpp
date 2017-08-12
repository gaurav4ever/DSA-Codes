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
		adj=new list<int>[x+1];
	}
	void addEdge(int x,int y);
	void print(int x);
	void p(int x);
};
void Graph::addEdge(int x,int y){
	adj[x].push_back(y);
	adj[y].push_back(x);
}
void Graph::print(int v){
	list<int>::iterator i;
	cout<<v<<"->";
	for(i=adj[v].begin();i!=adj[v].end();i++)
		cout<<*i<<" ";
	cout<<endl;
}
void Graph::p(int n){
	for(int i=1;i<=n;i++)
		print(i);
}
int main(){
	int n;
	cout<<"Enter the no. of users: ";cin>>n;
	Graph g(n);
	int conn;
	cout<<"Enter the no. of connections: ";cin>>conn;
	while(conn--){
		int x,y;
		cout<<"Enter the start node and end node in the connection"<<n-conn<<":";
		cin>>x>>y;	
		g.addEdge(x,y);
	}
	cout<<"\nThe friends list of all users:\n";
    g.p(n);
}