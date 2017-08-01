#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define mod 1000000007
int main() {
    int count=0;
    string str;
    cin>>str;
    long long int size=str.length();
    long long int set[size];
    for(long long int i=0;i<size;i++){
        set[i]=str[i]-'0';
    }
    
    long long int n=size;
    
    string s="";
    long long int sum=0;
    for (long long int i=0; i <n; i++){
		 for (long long int j=i; j<n; j++){
		 	for (long long int k=i; k<=j; k++){
                count++;
				s+=to_string(set[k]);
			}
            //cout<<s<<endl;
             sum=(sum+stoi(s))%mod;
            s="";
		 }
	}
    cout<<sum;

    cout<<"\nCount: "<<count;
    return 0;
}
