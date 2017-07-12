#include<iostream>
using namespace std;
#define V 5000
#define INF 9999
int graph[V][V],path[V][V];
void floyd(int graph[][V] ,int v)
{
	for(int i=1;i<=v;i++)
		for(int j=1;j<=v;j++)
			path[i][j]=graph[i][j];
			
	for(int k=1;k<=v;k++)
		for(int i=1;i<=v;i++)
			for(int j=1;j<=v;j++)
				if(path[i][k]+path[k][j] < path[i][j])
					path[i][j]=path[i][k]+path[k][j];
      /*  for(int i=1;i<=v;i++)
	{
		cout<<"\n";
		for(int j=1;j<=v;j++)
		{
			if(path[i][j]==INF)cout<<"INF   ";
			else 
				cout<<path[i][j]<<"     ";
		}
	}
        cout<<endl<<endl;
        */
        int t,a,b;
    cin>>t;
    while(t--)
        {
        cin>>a>>b;
        if(a==b && path[a][b]==INF)cout<<"0\n";
        else
            {
            if(path[a][b]==INF)cout<<"-1\n";
        else cout<<path[a][b]<<endl;
        }
    }		
}
int main()
{
	int n,m,x,y,val;
	cin>>n>>m;
    for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)	
	           graph[i][j]=INF;
    while(m--)
        {
            cin>>x>>y>>val;
        graph[x][y]=val;
    }
    floyd(graph,n);   
}
