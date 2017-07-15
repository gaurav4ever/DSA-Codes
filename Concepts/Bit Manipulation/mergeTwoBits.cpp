#include <iostream>
#include <conio.h>
#include <bitset>
using namespace std;
int main(){
	int n,m,i,j;
	cout<<"N : ";cin>>n;
	cout<<"M : ";cin>>m;
	cout<<"i : ";cin>>i;
	cout<<"j : ";cin>>j;

	int ones=1;

	int leftOnes=ones<<(j+1);
	bitset<8> x(leftOnes);
	cout<<"leftOnes : "<<x<<endl;

	int rightOnes=(1<<i)-1; //reverse bit 1->0 0->1
	bitset<8> y(rightOnes);
	cout<<"rightOnes : "<<y<<endl;

	int mask=leftOnes | rightOnes;
	bitset<8> z(mask);
	cout<<"Mask : "<<z<<endl;

	int clear_n=n&mask;
	bitset<8> p(clear_n);
	cout<<"clear_n : "<<p<<endl;

	int clear_m=m<<i;
	bitset<8> q(clear_m);
	cout<<"clear_m : "<<q<<endl;

	int ans=clear_n | clear_m;
	cout<<ans;
	return 0;
}