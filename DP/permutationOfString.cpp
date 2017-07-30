 #include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
void swap(char *a,char *b){
	char temp=*a;
	*a=*b;
	*b=temp;
}
void find(string s,int l,int r){
	if(l==r)cout<<s<<endl;
	else{
		for(int i=l;i<=r;i++){
			swap(&s[i],&s[l]);
			find(s,l+1,r);
			swap(&s[i],&s[l]);
		}
	}
}
int main(){
	int n;
	cout<<"Enter string size : ";
	cin>>n;
	string s;
	cout<<"Enter string : ";
	cin>>s;
	find(s,0,n-1);
}