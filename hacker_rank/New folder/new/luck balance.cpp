#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition (int arr[], int start, int end)
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

void quickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int p = partition(arr, start, end); 
        //printf("\n%d,%d,%d\n",start,p,end);
        quickSort(arr, start, p - 1);
        quickSort(arr, p + 1, end);
    }
}

int main() {
   int n,k,total_luck=0,luck,importance,imp=0,p=0,a[10001];
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>luck>>importance;
        total_luck+=luck;
        if(importance==1){
            imp++;
            a[p++]=luck;
        }
    }
    quickSort(a, 0, imp-1);
    int win=imp-k,w=0;
    for(int i=0;i<win;i++)
        w+=a[i];
    total_luck-=2*w;
    cout<<total_luck;
    return 0;
}
