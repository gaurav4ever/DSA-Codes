#include <iostream>
#include <conio.h>
#include <stack>
using namespace std;

#define MAX 100
int n;
int v_count=1;
stack<int> s;
int adj[MAX][MAX];

struct dfs{
	int node;
	bool visited;
};
struct dfs *v[MAX];
void addVertex(int val){
	struct dfs *temp=new dfs;
	temp->node=val;
	temp->visited=false;

	v[v_count++]=temp;
}
int adjVertex(int val){
	for(int i=1;i<=n;i++){
		if(adj[val][i]==1 && v[i]->visited==false)
			return i;
	}
	return -1;
}
void display(int x){cout<<x<<" ";}
void dfs(){
	v[0]->visited=true;
	display(v[0]->node);
	s.push(v[0]->node);

	while(!s.empty()){
		int val=adjVertex(s.top());
		if(val==-1){
			s.pop();
		}else{
			v[val]->visited=true;
			display(val);
			s.push(val);
		}
	}

	for(int i=1;i<=n;i++){
		v[i]->visited=false;
	}
}
int main(){
	cout<<"Enter number of vertices : ";cin>>n;
	for(int i=1;i<=n;i++){
		addVertex(i);
	}
	for(int i=0;i<MAX;i++)for(int j=0;j<MAX;j++)adj[i][j]=0;

	int x,y,flag=0;
	while(1){
		cout<<"Enter 2 vertices to connect";
		cin>>x>>y;
		adj[x-1][y-1]=1;
		adj[y-1][x-1]=1;
		cout<<"Node Connected.";

		cout<<"\n\nContinue ? 1/0 : ";cin>>flag;
		if(flag==0)break;
	}

	dfs();
	return 0;
}