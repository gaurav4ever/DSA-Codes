#include <bits/stdc++.h>
using namespace std;
map<int,int>mm;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		mm[a[i]]++;
	}
	int m;
	cin>>m;

	map<int,int>::iterator it;
	int sum=0,count=0;
	for(it=mm.begin();it!=mm.end();it++){
		if(sum+((it->first)*(it->second))<=m){
			sum+=((it->first)*(it->second));
			mm[it->first]=1;
			count++;
		}else{
			mm[it->first]=0;
		} 
	}
	cout<<count<<endl;
	cout<<"[";
	for(int i=0;i<n;i++){
		if(i!=n-1){
			cout<<mm[a[i]]<<",";
		}else cout<<mm[a[i]];
	}
	cout<<"]";
	return 0;
}