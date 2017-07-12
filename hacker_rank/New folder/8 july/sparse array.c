#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
#include<map>
using namespace std;


int main() {
  int n,q;
    cin>>n;
    char s[21];
    map<string, int>mapp;
    for(int i=0;i<n;i++){
        cin>>s;
        mapp[s]+=1;
       // cout<<mapp[s]<<endl;
    }
    cin>>q;
    char c[21];
    for(int i=0;i<q;i++){
        cin>>c;
        cout<<mapp[c]<<endl;
    }
    return 0;
}
