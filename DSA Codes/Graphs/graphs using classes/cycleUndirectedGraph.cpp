#include <iostream>
using namespace std;
struct Edges{
	int src,des;
};
struct Graph{
	int V;
	int E;
	struct Edges *edges;
};
struct Graph* createGraph(int V,int E){
	struct Graph *g=new Graph;
	g->V=V;
	g->E=E;
	g->edges=new Edges;
}
int find(int parent[],int x){
	if(parent[x]==-1)return x;
	return find(parent,parent[x]);
}
void Union(int parent[],int x,int y){
	int x_=find(parent,x);
	int y_=find(parent,y);
	parent[x_]=y_;
}
bool hasCycle(struct Graph *graph){
	int parent[graph->V];
	for(int i=0;i<graph->V;i++)parent[i]=-1;

	for(int i=0;i<graph->E;i++){
		int v1=find(parent,graph->edges[i].src);
		int v2=find(parent,graph->edges[i].des);

		if(v1==v2)return true;
		Union(parent,v1,v2);
	}
	return false;
}
int main(){
	struct Graph *graph=createGraph(4,4);
	graph->edges[0].src=0;
	graph->edges[0].des=1;

	graph->edges[1].src=1;
	graph->edges[1].des=2;

	graph->edges[2].src=2;
	graph->edges[2].des=3;

	graph->edges[3].src=0;
	graph->edges[3].des=3;

	if(hasCycle(graph))
		cout<<"Cycle";
	else cout<<"No Cycle";
	return 0;
}