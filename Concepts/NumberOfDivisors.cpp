#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n;
	cin>>n;
	long long int a[n]={0};
    bool prime[n];

    memset(prime, true, sizeof(prime));

    for (long long int p=2; p*p<=n; p++){
        
            for (long long int i=p*2; i<=n; i += p){
                prime[i] = false;
            	a[i]+=1;
            }
        
    }

    for(long long int i=1;i<n;i++)
    	cout<<i<<":"<<a[i]<<endl;
    
    return 0;
}
