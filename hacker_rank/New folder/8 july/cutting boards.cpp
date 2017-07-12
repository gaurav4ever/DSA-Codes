#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void swap(long long int* a, long long int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition (long long int arr[], long long int start, long long int end)
{
    int pivot= arr[end];    
    int pi = start-1;  
 	int i;
    for (i = start; i <= end- 1; i++)
    {
        if (arr[i] <= pivot)
        {
            pi++;    
            swap(&arr[pi], &arr[i]);  
        }
    }
    swap(&arr[pi+1], &arr[end]);
	int k; 
	
	
    return (pi + 1);
}

void quickSort(long long int arr[], long long int start, long long int end)
{
    if (start < end)
    {
        int p = partition(arr, start, end); 
        
        quickSort(arr, start, p - 1);
        quickSort(arr, p + 1, end);
    }
}
int mod=1000000007;
int main() {
    int t;
    cin>>t;
    while(t--){
        int m,n,th=1,tv=1,ts=0,sum=0,ki=0,kj=0;
        cin>>m>>n;
        
        
        long long int a[m],b[n];
        for(int i=1;i<m;i++)cin>>a[i]; quickSort(a, 1, m-1);
        for(int i=1;i<n;i++)cin>>b[i]; quickSort(b, 1, n-1);
        
        //for(int i=0;i<m-1;i++)cout<<a[0][i]<<" ";cout<<endl;
        //for(int i=0;i<n-1;i++)cout<<a[1][i]<<" ";
        int i=m-1,j=n-1;
        a[0]=-1;
        b[0]=-1;
        int po=0;
        while(i || j){
            
            if(a[i]>b[j]) po=1;
            else po=2;
            
            if(po==1){
                sum=(sum+(a[i]*th)%mod)%mod;
              
                tv++;
                i--;
            }
            if(po==2){
                sum=(sum+(b[j]*tv)%mod)%mod;
                sum=sum%mod;
                th++;
                j--;
            }
            
        }
       
        cout<<sum<<endl;
    }
    return 0;
}
