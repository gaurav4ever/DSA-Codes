#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int f[1000000];
#define mod 1000000007
int fibo(int a,int b,int n){
    if(n==0)return a;
    if(n==1)return b;
    if(f[n]!=0)return f[n];
    f[n]=fibo(a,b,n-1)+fibo(a,b,n-2);
    return f[n]%mod;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        for(int i=0;i<1000000;i++)f[i]=0;
        cout<<fibo(a,b,n)%mod<<endl;
    }
    return 0;
}
