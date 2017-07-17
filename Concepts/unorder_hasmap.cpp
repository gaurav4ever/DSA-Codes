#include <iostream>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
int main(){
	unordered_map<string,int>m;
	m["yo"]=2;
	m["gaurav"]=6;
	m["sharma"]=6;

	unordered_map<string,int>::iterator i;

	for(i=m.begin();i!=m.end();i++){
		cout<<i->first<<"->";
		cout<<i->second<<endl;
	}
	return 0;
}

// Error -> unordered_map is not declared in this scope