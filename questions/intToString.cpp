#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	char c;
	cin>>c;
	int val;
	if(c>='0' && c<='9')
		val=c-'0';

	cout<<"c : "<<c<<" int(c) : "<<val; 
	cout<<"\n"<<int('8');
	getch();
	return 0;
}