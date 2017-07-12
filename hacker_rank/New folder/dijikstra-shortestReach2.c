#include<iostream>
#include<limits.h>
using namespace std;
#define max 5001
int path[max][max];
//int v;
void display(int d[],int n,int src)
{
	for(int i=1;i<=n;i++)
	{
		if(d[i]==INT_MAX)d[i]=-1;
		if(src!=i)
		cout<<d[i]<<" ";
	}
}
int min(int v,int d[],int p[])
{
	int min=INT_MAX,minp=0;
	for(int i=1;i<=v;i++)
		if(d[i]<min && p[i]==0)
		{
			min=d[i];
			minp=i;
		}
		return minp;
}
void dijkstra(int v,int path[][max], int src)
{
	int d[v],p[v];
	for(int i=1;i<=v;i++)
		{
			d[i]=INT_MAX;
			p[i]=0;
		}
		d[src]=0;
		for(int i=1;i<=v-1;i++)
		{
			int u=min(v,d,p);
			p[u]=1;
			for(int j=1;j<=v;j++)
			{
				if(p[j]==0 && path[u][j]!=0 && d[u]!=INT_MAX && d[u]+path[u][j] < d[j])
				{
					d[j]=d[u]+path[u][j];
				}
			}
		}
		display(d,v,src);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int s,n,m,x,y,val;
		cin>>n;
		//int path[max][max];
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				path[i][j]=0;
			 cin>>m;	
		while(m--)
		{
			cin>>x>>y>>val;
			if(path[x][y]==0)
			{
				path[x][y]=val;
				path[y][x]=val;
			}
			else if(path[x][y]!=0 && path[x][y] > val)
			{
				path[x][y]=val;
				path[y][x]=val;
			}
		}
			cin>>s;	
	dijkstra(n,path,s);cout<<endl;
	}
		return 0;
}
