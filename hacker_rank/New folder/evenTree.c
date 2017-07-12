#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 #define max 1000
int k=0;
int dfs(int x,int n,int a[max][max],int visited[max])
{
       int r=1;   visited[x]=1;
    for(int i=1;i<=n;i++)
        {
            if(visited[i]==0 && a[x][i]==1)
            {
                int count=dfs(i,n,a,visited);
                if(count!=0 && count%2==0)k+=1;
                else r+=count;    
            }
    }
   // cout<<r<<" ";
    return r;
}
int main() {
    int n,m;
    cin>>n>>m;
    int a[max][max],visited[max];
    for(int i=1;i<=n;i++)
        {
        visited[i]=0;
        for(int j=1;j<=n;j++)
            {
                a[i][j]=0;
        }
    }
    int x,y,i=1,j=1;
    while(m--)
        {
        cin>>x>>y;
        if(a[x][y]==0)
        a[x][y]=a[y][x]=1;
    }
            int e=dfs(1,n,a,visited);
   //int e=dfs(1,n,a,visited);
   //cout<<e<<endl;
cout<<k;
    return 0;
}
