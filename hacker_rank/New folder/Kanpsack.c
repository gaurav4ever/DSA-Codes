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
        int n,W,wt[2001],k[2001]={0};
        cin>>n>>W;
        for (int i=0;i<n;i++)
        {
            cin>>wt[i];
            k[wt[i]]=1;
            for(int j=0;j<=W;j++)
                {
                    if(k[j] && j+wt[i]<=W)k[j+wt[i]]=1;
            }
        }
        while(k[W]==0&& W>0)
            {
           W--;
        }
        
        cout<<W;
        cout<<endl;
    }
       
    return 0;
}
