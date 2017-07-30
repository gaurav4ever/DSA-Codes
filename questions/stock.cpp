#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int changed_pos=0;
        for(int i=1;i<n/2;i++){
            if(a[i-1]%2==0 && a[i+1]%2==0){
                int val=(a[i-1]+a[i+1])/2;
                if(abs(val-a[n-i-1]) > abs(a[i]-a[n-i-1])){
                    a[i]=val;
                }
            }
        }
        
        int sum=0;
        for(int i=0;i<n/2;i++){
            sum+=(abs(a[n-i-1]-a[i]));
        }
        cout<<sum<<endl;
    }
    return 0;
}
