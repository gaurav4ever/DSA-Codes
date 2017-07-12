#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a[2733][2733]={0},n,k,b[100],m=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>b[i];
        if(b[i]<k)m+=1;
        else{
            m+=b[i]/k;
            m+=b[i]%k;
        }
    }
    m++;
    
    int flag=0,pos=0;
    for(int p=0;p<n;p++){
        int x=0;
        flag=0;
    for(int i=pos;i<m;i++){
        for(int j=0;j<k;j++){
            x++;
            if(x<b[p]){
                a[i][j]=x;
            }
            else {
                a[i][j]=x;
                flag=1;
                pos=i;
                break;
            }
        }
        if(flag==1){pos=pos+1;break;}
    }
    }
   int count=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<k;j++){
           // cout<<a[i][j]<<" ";
            if((i+1)==a[i][j])count++;
        }
    //    cout<<endl;
    }
    cout<<count;
    
    return 0;
}
