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
  	unsigned long long int x;
 	cin>>x;
      int count=0;
      x=x-1;
    while(x){
        x=(x&(x-1));
        count++;
    }
      if(count&1)cout<<"Louise"<<endl;
      else cout<<"Richard"<<endl;
  }
    return 0;
}
