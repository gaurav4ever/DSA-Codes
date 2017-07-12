#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long int arr[10000001]={0};
//calculated by prefix sum
int main() {
     long long int n,m;
    cin>>n>>m;
   
    //int max=0;
    
    
    while(m--){
     int a,b,k;
        cin>>a>>b>>k;
        arr[a]+=k;
        arr[b+1]-=k;
    }
    long long int max=-1,sum=0;
    for(int i=1;i<=n;i++){
        sum+=arr[i];
        if(max<sum)max=sum;
    }
    cout<<max<<endl;
    return 0;
}
