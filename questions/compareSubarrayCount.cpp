#include <bits/stdc++.h>
#include <math.h>
#include <map>
using namespace std;

map< int,vector<int> >mymap;

int yo=0,k=0;
int mCounter1=0,mCounter2=0;
bool check(int x){
	int n=x | (x-1);
	if(n&(n+1))return true;
	return false;
}
void powerSet1(int set[],int n){
	int counter=pow(2,n);
	int flag=1;
	for (int i=0; i <n; i++){
		 for (int j=i; j<n; j++){
		 	for (int k=i; k<=j; k++){
		 		mCounter1++;
				mymap[yo].push_back(set[k]);
			}
			yo++;
		 }
	}
}
void powerSet2(int set[],int n){
	int counter=pow(2,n);
	int flag=1;
	for(int i=0;i<counter;i++){
		for(int j=0;j<n;j++){
			mCounter2++;
			if(!check(i)){
				if(i & 1<<j){
					mymap[k].push_back(set[j]);
					flag=0;
				} 
			}	
		}
		if(flag==0)
			k++;
		flag=1;
	}
}
int main(){
	int n,m;
	cin>>n;
	int set[n];
	for(int i=0;i<n;i++)cin>>set[i];
	powerSet1(set,n);
	powerSet2(set,n);

	// map< int, vector<int> >::iterator it;	
	// for(it=mymap.begin();it!=mymap.end();it++){
	// 	for(int i=0;i<it->second.size();i++){
	// 		cout<<it->second[i];
	// 	}
	// 	cout<<endl;
	// }

	cout<<"\n\n counter1 : "<<mCounter1;
	cout<<"\n counter2 : "<<mCounter2;
	return 0;
}