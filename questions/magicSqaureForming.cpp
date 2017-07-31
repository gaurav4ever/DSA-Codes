#include <bits/stdc++.h>
using namespace std;
int main(){
	int arr[9] =    {4,9,2,3,5,7,8,1,6};
    int arr1[9] =   {2,7,6,9,5,1,4,3,8};
    int arr2[9] =   {6,1,8,7,5,3,2,9,4};
    int arr3[9] =   {2,9,4,7,5,3,6,1,8};
    int arr4[9] =   {6,7,2,1,5,9,8,3,4};
    int arr5[9] =   {8,1,6,3,5,7,4,9,2};
    int arr6[9] =   {8,3,4,1,5,9,6,7,2};
    int arr7[9] =   {4,3,8,9,5,1,2,7,6};

    int a[8]={0};
    int k;
    for(int i=0;i<9;i++){
    	cin>>k;
    	a[0]+=abs(k-arr[i]);
    	a[1]+=abs(k-arr1[i]);
    	a[2]+=abs(k-arr2[i]);
    	a[3]+=abs(k-arr3[i]);
    	a[4]+=abs(k-arr4[i]);
    	a[5]+=abs(k-arr5[i]);
    	a[6]+=abs(k-arr6[i]);
    	a[7]+=abs(k-arr7[i]);
    }
    int min=INT_MAX;
    for(int i=0;i<8;i++)
    	if(min>a[i])min=a[i];
    cout<<min;
}