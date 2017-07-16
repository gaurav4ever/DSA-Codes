#include <iostream>
#include <map>
using namespace std;
int main(){
	map<string,int>m;
	m["yo"]=2;
	m["gaurav"]=6;
	m["sharma"]=6;

	map<std::string,int>::iterator i;

	for(i=m.begin();i!=m.end();i++){
		cout<<i->first<<"->";
		cout<<i->second<<endl;
	}
	return 0;
}