#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x,y,n,m;
    long long int R;
    cin>>n>>m;
    cin>>R;
    x=n,y=m;
    int a[400][400];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        cin>>a[i][j];
    int i=0,row=0,col=0;
        n=x;m=y;
    while(row<n && col<m){
       int k=R;
        if(row+1==n || col+1==m)break;
        
        //layers
         int l=(n-row-1)+(n-row-2)+(m-col)+(m-col-1);
        if(l<k)
            k=k%l;
        while(k--){
             int p,q,r,s;
        int temp=a[row][col];
        for(p=row;p<m-1;p++){
            a[row][p]=a[row][p+1];
        }
        for(q=col;q<n-1;q++){
            a[q][m-1]=a[q+1][m-1];
        }
        for(r=m-1;r>row;r--){
            a[n-1][r]=a[n-1][r-1];
        }
        
        for(s=n-1;s>col;s--){
            a[s][col]=a[s-1][col];
        }
        a[row+1][col]=temp;        
        }
        row++;col++;
        n--;m--;
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;    
        }
    return 0;
}
