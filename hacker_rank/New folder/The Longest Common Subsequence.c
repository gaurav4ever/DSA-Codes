#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max_val(int a,int b){
    if(a>=b)return a;
    else return b;
}
int main() {
    int n,m,max=0,max_i=0,max_j=0;
    cin>>n>>m;
    int a[100],b[100],c[102][102];
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int j=1;j<=m;j++)cin>>b[j];
    for(int i=0;i<=m;i++)
        {
        for(int j=0;j<=n;j++)
            {
                if(i==0||j==0)c[i][j]=0;
            else if(b[i]==a[j])
            {
                c[i][j]=c[i-1][j-1]+1;
                    }
                else 
                c[i][j]=max_val(c[i-1][j],c[i][j-1]);
                
              }
    }
    for(int i=0;i<=m;i++)
        {
        for(int j=0;j<=n;j++)
            {
                if(c[i][j]>max){
                    max=c[i][j];
                    max_i=i;max_j=j;
                }
          
        }
      //  cout<<endl;
    }
    int x[102],k=0;
    int i=m,j=n;
    while(i>0 && j>0)
        {
            if(a[j]==b[i])
                {
                x[k++]=a[j];
                i--;j--;
            }
        else if(c[i-1][j]>=c[i][j-1])
            i--;
            else j--;
    }
    for(int i=k-1;i>=0;i--)
        cout<<x[i]<<" ";
    return 0;
}
