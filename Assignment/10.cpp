#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l){
        int mid = l + (r - l)/2;
        if (arr[mid] == x)  return mid;
        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);
        return binarySearch(arr, mid+1, r, x);
   }
   return -1;
}
int main(){
	int n;
	cout<<"Enter the number of Teams:";
	cin>>n;
	cout<<"Enter the score: ";
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	cout<<"Enter the score to be searched:";
	int ele;
	cin>>ele;

	int ans=binarySearch(a,0,n-1,ele);
	if(ans==-1)cout<<"Score Not Found";
	else cout<<ele<<" is the score of Team "<<ans+1;
}