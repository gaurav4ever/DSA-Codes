#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int small(int a[],int x,int y){
    int min=a[x],pos=x;
    for(int i=x;i<=y;i++){
        if(min>a[i]){
            min=a[i];
            pos=i;
        }
    }
    return pos;
}
void convert(int a[],int x,int y){
    int p=3;
    while(p--){
        int pos=small(a,x,y);
        if(pos==x)return; 
        
        int temp=a[x];
    for(int i=x;i<y;i++){
        a[i]=a[i+1];
    }
    a[y]=temp;        
    }
}
int ifsort(int a[],int x,int y){
    if(a[x]<a[x+1] && a[x+1]<a[y])return 1;
    return 0;
}
int main() {
   int T,t;
    cin>>t;
    while(t--){
        int n,b[3],count=0;;
        cin>>n;
        int i=0,a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(int j=0;j<2000;j++){
                 i=0;
            int flag=0;
         while(i<n-2){
              if(!(a[i]<a[i+1] && a[i+1]<a[i+2])){
                  convert(a,i,i+2);
                  flag=1;
              }
              int check=ifsort(a,i,i+2);
              if(check==1 && flag==1)i=i+2;
              else i++;
        }
        }
        
        int flag=0;
        for(int i=0;i<n-1;i++)
         {
            if(a[i]<a[i+1]){
               flag=0; 
            }
            else {flag=1;break;}
        }
        if(flag==0)cout<<"YES";
        else cout<<"NO";
            cout<<endl;
    }
    return 0;
}
