#include <bits/stdc++.h>
#include <math.h>
#include <map>
using namespace std;

map< int,vector<int> >mymap;

int yo=0;
void powerSet(int set[],int n){
	int counter=pow(2,n);
	int flag=1;
	for (int i=0; i <n; i++){
		 for (int j=i; j<n; j++){
		 	for (int k=i; k<=j; k++){
				mymap[yo].push_back(set[k]);
			}
			yo++;
		 }
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	int set[n];
	for(int i=0;i<n;i++)cin>>set[i];
	powerSet(set,n);

	cout<<"\n\n";
	map< int, vector<int> >::iterator it;	
	for(it=mymap.begin();it!=mymap.end();it++){
		//cout<<it->first;
		for(int i=0;i<it->second.size();i++){
			cout<<it->second[i];
		}
		cout<<endl;
	}

	// while(m--){
	// 	int x,y;
	// 	cin>>x>>y;
	// 	int count=0;
	// 	for(it=mymap.begin();it!=mymap.end();it++){
	// 		if(it->second.size()>=2){
	// 			int count_x=0,count_y=0;
	// 			for(int i=0;i<it->second.size();i++){
	// 				if(it->second[i]==x)count_x++;
	// 				else if(it->second[i]==y)count_y++;
	// 			}
	// 			if(count_x==count_y)count++;	
	// 		}
	// 	}
	// 	cout<<count<<endl;		
	// }
	return 0;
}