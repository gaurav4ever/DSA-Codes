#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool check(int i,int j,int n,int m,int a[10][10]){
    if(i<0 || j<0 || i>=n || j>=m)return false;
    //if(a[i][j]==-1)return false;
    return true;
}
int dfs(int i,int j,int n,int m,int a[10][10]){
    if(!check(i,j,n,m,a))return 0;
    int count=1;
    int n_i,n_j;
    for(int x=-1;x<=1;x++){
        for(int y=-1;y<=1;y++){
            n_i=i+x;
            n_j=j+y;
            count+=dfs(n_i,n_j,n,m,a);
        }
    }
    return count;
}
int sol(int n,int m,int a[10][10]){
    int max=0,temp=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            temp=dfs(i,j,n,m,a);
            
            if(temp>max)max=temp;
        }
    }
    return max;
}
int main() {
    int n,m;
    cin>>n>>m;
    int a[10][10];
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>a[i][j];
    cout<<sol(n,m,a);
    return 0;
}
