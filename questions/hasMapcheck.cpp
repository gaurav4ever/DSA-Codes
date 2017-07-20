#include <bits/stdc++.h>
using namespace std;
map<int,int>hs;
int main(){
	for(int i=0;i<100;i++)
		hs[i]++;
	for(int i=44;i<100;i++)
		hs[i]++;

	for(int i=0;i<100;i++)
		cout<<hs[i];

	return 0;
}