#include <bits/stdc++.h>
#include <limits>
using namespace std;
#define INF 1000
int main(){
	int n,t;
	cin>>n;
    t=n;
	int x,y;
	int a[n+1][n+1],vertexVal[n+1],g[n+1][n+1],path[n+1][n+1]={0};
	while(t--){
		if(t!=0){
			cin>>x>>y;
			a[x][y]=1;
			a[y][x]=1;	
		}else{
			for(int i=1;i<=n;i++){
				cin>>vertexVal[i];
				a[i][i]=1;
			}
		}
	}
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            path[i][j]=INF;
        }
    }
        
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]==1 && i!=j){
				path[i][j]=vertexVal[i]+vertexVal[j];
			}else if(a[i][j]==1 && i==j){
				path[i][j]=vertexVal[i];
			}
		}
	}
    
    for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
            if(path[i][j]==INF)
                cout<<"0"<<" ";
            else
            cout<<path[i][j]<<" ";
		}
        cout<<endl;
	}
    cout<<"\n\n";

	int max=0,min=INF;

	for(int v=1;v<=n;v++){ // intermediate vertex
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(path[i][v]+path[v][j]<path[i][j])
					path[i][j]=path[i][v]+path[v][j]-path[v][v];
			}
		}
	}
    
    for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
            cout<<path[i][j]<<" ";
		}
        cout<<endl;
	}
    
    
    cout<<endl;
    int f[max+1];
    int sum=0;
    
    for(int i=0;i<=max;i++)f[i]=0;
    f[0]=1;f[1]=1;

    //vector<int> a;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
            f[path[i][j]]+=f[path[i][j]-1]+f[path[i][j]-2]; 
		}
	}
    
    for(int i=min;i<=max;i++)sum+=f[i];
    
    cout<<sum;

	return 0;
}