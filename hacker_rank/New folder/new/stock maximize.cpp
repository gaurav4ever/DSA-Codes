#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int  t;
    cin>>t;
    while(t--){
      long long int n;
        cin>>n;
        long long int a[n];
        long long int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=0;
        }
        long int mark=0;
        for(int i=n-1;i>=0;i--){
            if(mark<=a[i]){
                mark=a[i];
                b[i]=1;
            }
        }
        long int count=0,max=0;
        for(int i=0;i<n;i++){
            if(b[i]==0){
                count++;
                max-=a[i];
            }
            else if(b[i]==1){
                max+=(a[i]*count);
                count=0;
            }
        }
        if(max>0)
        cout<<max<<endl;
        else cout<<"0\n";
    }
    return 0;
}
