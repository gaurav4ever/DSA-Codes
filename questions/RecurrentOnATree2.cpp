#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define mod 1000000007
long long n,i,a,b,c[200005],S,fx[200005],j,C,d;
vector<int>v[200005];
int fib[105000003];

void solve(int i,int sum){
	fx[i]=1;
	for(int j=0;j<v[i].size();j++){
		int k=v[i][j];
		if(!fx[k]){
			S+=fib[sum+c[k]];
			S=S%mod;
			solve(k,sum+c[k]);
			fx[k]=0;	
		}
		
	}
}

int main() {

	std::ios::sync_with_stdio(false);

	fib[0]=1;fib[1]=1;C=2;

	while(C<=105000000){
		a=fib[C-2];b=fib[C-1];
		fib[C]=a+b;
		C++;
		if(fib[C-1]>=mod)
			fib[C-1]-=mod;
	}

	cin>>n;
	for(i=0;i<n-1;i++){
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	for(i=1;i<=n;i++)
		cin>>c[i];

	long long ans=0;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			fx[j]=0;
		}

		S=0;
		ans+=fib[c[i]];
		solve(i,c[i]);

		ans=ans+S;
		ans=ans%mod;
	}

	cout<<ans<<endl;
return 0;
}