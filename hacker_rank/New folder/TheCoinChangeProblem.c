#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n,m,a[300],val[300]={0};
    cin>>m>>n;
    val[0]=1;
    for(int i=0;i<n;i++)
       {
            cin>>a[i];
           // val[a[i]]+=1;
        for(int j=a[i];j<=m;j++)
            {
                val[j]+=val[j-a[i]];
        }
    }
cout<<val[m];
    return 0;
}
