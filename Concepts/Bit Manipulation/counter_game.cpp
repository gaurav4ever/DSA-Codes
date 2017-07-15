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
        long long int n;
        cin>>n;
        int win=0;
        while(n!=1){
            long long int power=floor(log(n)/log(2));
	        long long int val=pow(2,power);    
            n=val/2;
            win++;
        }
        if(win%2==0)cout<<"Richard"<<endl;
        else cout<<"Louise"<<endl;
    }
    return 0;
}
