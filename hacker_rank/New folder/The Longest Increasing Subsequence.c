#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int search(long long int A[], long long int l, long long int r,long long int key)
{
    while (r - l > 1)
    {
        int m = l + (r - l)/2;
        if (A[m]>=key)
            r = m;
        else
            l = m;
    }
    return r;
}
int main() {
    long long int n,a[1000000],l[1000000]={0},r[1000000]={-1},k=1,len=0;
   cin>>n;
   for(long long int i=0;i<n;i++)cin>>a[i];
    l[0]=a[0];
    for(long long int i=1;i<n;i++)
        {
            if(a[i]>l[k-1])
            {
                l[k++]=a[i];
                //r[k]=r[k-1];
                //len++;
            }
            else if (a[i]<l[0])
                l[0]=a[i];
                
          else 
               {
                long long int pos=search(l,-1,k-1,a[i]);
                    l[pos]=a[i];   
            }
        }
    //for(long long int i=0;i<k;i++)
      //  cout<<l[i]<<" ";
    cout<<k;
    return 0;
}
