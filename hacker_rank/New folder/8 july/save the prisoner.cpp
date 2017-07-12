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
        int n,m,s;
        cin>>n>>m>>s;
        int pos=m%n;
        
        if(((s-1)+pos)>n)
            cout<<((s-1)+pos)-n<<endl;
        else if((s-1)+pos==0)cout<<n<<endl;
        else cout<<((s-1)+pos)<<endl;
    }
    return 0;
}
