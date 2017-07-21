// BEst till

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

map< pair<int,int>,int > hashMap;
pair<int,int> myPair;
 
int GetTotal(vector<int> a, int x, int y) {
	vector<int> diff;
    map<int, int> check;
	int result = 0;
    
	diff.push_back(0);
    check[0]++;
    
	for (int i = 0; i < a.size(); i++) { 
		int val = diff[i];
        if (a[i]==x && a[i]==y)val;
		else if (a[i] == x) val++;
		else if (a[i] == y) val--;
		diff.push_back(val);
        
        result+=check[val];
		check[val]++;
	}
	
	return result;
}
 
int main(void) {
	int n,m;
	cin>>n>>m;
	int x;
	vector<int> a(n);
	for(int i=0;i<n;i++){
        cin>>a[i];
	}
	
	while(m--){
		int x,y;
		cin>>x>>y;
        myPair=make_pair(x,y);
        
        if(find(a.begin(), a.end(), x) == a.end() && find(a.begin(), a.end(), y) == a.end()){
            
            if(hashMap[myPair]==0){
                int val=(n*(n+1))/2;
                hashMap[myPair]=val;
                cout <<val<<endl;  
            }
            else cout<<hashMap[myPair]<<endl;    
            
        }else{
            
            if(hashMap[myPair]==0){
                int val=GetTotal(a, x, y);
                hashMap[myPair]=val;
                cout <<val<<endl;  
            }
            else cout<<hashMap[myPair]<<endl;    
            
        }
	}
	
}