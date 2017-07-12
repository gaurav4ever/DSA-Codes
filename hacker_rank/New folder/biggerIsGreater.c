#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int t;
    cin>>t;
    while(t--)
        {
        int ans;
       string s;
           cin>>s;
      ans= next_permutation(s.begin(),s.end());
        if(ans==0)cout<<"no answer\n";
        else
        cout<<s<<"\n";
    }
    return 0;
}
