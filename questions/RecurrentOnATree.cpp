#include <bits/stdc++.h>

using namespace std;

#define mod 1000000007
long long n,i,a,b,c[200005],S,f[200005],j,C,d;
vector<int>v[200005];
int fibo[105000003];

void getDistance(int i,int sum){
	f[i]=1;
	for(int j=0;j<v[i].size();j++){
		int k=v[i][j];
		if(!f[k]){
			S+=fibo[sum+c[k]];
			S=S%mod;
			getDistance(k,sum+c[k]);
			f[k]=0;	
		}
		
	}
}

int main() {

	

	fibo[0]=1;fibo[1]=1;C=2;

	while(C<=105000000){
		a=fibo[C-2];b=fibo[C-1];
		fibo[C]=a+b;
		C++;
		if(fibo[C-1]>=mod)
			fibo[C-1]-=mod;
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
			f[j]=0;
		}

		S=0;
		ans+=fibo[c[i]];
		getDistance(i,c[i]);

		ans=ans+S;
		ans=ans%mod;
	}

	cout<<ans<<endl;
return 0;
}