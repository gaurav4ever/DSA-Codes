#include <iostream>
#include <conio.h>
#include <stack>
using namespace std;

#define MAX 100
int n;
int v_count=1;
stack<int> s;
int adj[MAX+1][MAX+1];

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
	v[1]->visited=true;
	display(v[1]->node);
	s.push(v[1]->node);

	while(!s.empty()){
		int val=adjVertex(s.top());
		// cout<<"top : "<<s.top()<<endl;
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
	for(int i=1;i<=MAX;i++)for(int j=1;j<=MAX;j++)adj[i][j]=0;

	int x,y,flag=0;
	while(1){
		cout<<"Enter 2 vertices to connect";
		cin>>x>>y;
		adj[x][y]=1;
		cout<<"Node Connected.";

		cout<<"\n\nContinue ? 1/0 : ";cin>>flag;
		if(flag==0)break;
	}

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			cout<<adj[i][j]<<" ";
		cout<<endl;
	}

	dfs();
	return 0;
}