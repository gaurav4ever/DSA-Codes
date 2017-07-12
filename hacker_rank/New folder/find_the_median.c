#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
int main() {  
    int n;
    cin>>n;
    int a[20010]={0};
    
    for(int i=0;i<n;i++)
    {
        int tmp;
        cin>>tmp;
        a[tmp]++;
    }
    int ind=(n+1)/2;
    int sum=0;
    for(int i=0;i<n;i++)
    {
            sum=sum+a[i];
            if(sum>=ind)
            {
                cout<<i;
                break;
            }
    }
    return 0;
}

