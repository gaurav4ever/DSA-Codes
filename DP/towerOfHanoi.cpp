#include <iostream>
using namespace std;
void toh(int n,char from,char to,char buffer){
	if(n==1){
		cout<<"Disk "<<n<<" moved from "<<from<<" to "<<to<<endl;
		return;
	}
	toh(n-1,from,buffer,to);
	cout<<"Disk "<<n<<" moved from "<<from<<" to "<<to<<endl;
	toh(n-1,buffer,to,from);
}
int main(){
	int c=5;
	toh(c,'a','b','c');
	return 0;
}