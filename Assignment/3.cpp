#include <bits/stdc++.h>
using namespace std;
void replace(string s,char a,char b,int i){
	if(tolower(s[i])==tolower(a))s[i]=b;
	if(s.length()==i)cout<<"The modified string is "<<s;
	replace(s,a,b,i+1);
}
int main(){
	string s;
	cout<<"Enter the string:";
	cin>>s;
	char a,b;
	cout<<"Enter the character to be replaced :";
	cin>>a;
	cout<<"Enter the character to be replaced with : ";
	cin>>b;
	replace(s,a,b,0);
	return 0;
}