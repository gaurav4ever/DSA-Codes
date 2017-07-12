#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n;
int part(int a[],int low ,int high)
    {
    int i,j,k,pivot,pi;
    pivot=a[high];
    pi=low;
    for(i=low;i<=high;i++)
        {
            if(a[i]<=pivot)
                {
               int temp=a[i];
                a[i]=a[pi];
                a[pi]=temp;
                pi++;
           
            }
    }
 
    for(int k=0;k<n;k++)cout<<a[k]<<" ";
        cout<<"\n";  
    return pi-1;
}
void qs(int a[],int low,int high)
{int n=high;
    if(low<high)
   {
        int p=part(a,low,high);
        qs(a,low,p-1);
        qs(a,p+1,high);
        
         
    }
}
int main() 
{
   int a[5000],i,j;
    cin>>n;
    for(i=0;i<n;i++)cin>>a[i];
    qs(a,0,n-1);
     
    return 0;
}
