#include <iostream>
#include <conio.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,flag=0;
	    cin>>n;
	    int a[n];
	    map<int,int> m;
	    for(int i=0;i<n;i++)cin>>a[i];
	    
	    for(int i=0;i<n-1;i++){
	        for(int j=i+1;j<n;j++){
	            int sum=a[i]+a[j];
	            cout<<"("<<a[i]<<","<<a[j]<<") Sum : "<<sum<<"\n";
	            m[sum]++;
	            if(m[sum]==2){
	                flag=1;
	                break;
	            }
	        }
	    }
	    if(flag==1){
	        cout<<"1"<<endl;
	    }else{
	        cout<<"0"<<endl;
	    }
    }
    getch();
	return 0;
}