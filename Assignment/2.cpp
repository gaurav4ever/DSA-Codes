#include <iostream>
using namespace std;
void toh(int n,char from,char to,char buffer){
	if(n==1){
		cout<<"Move disk "<<n<<" from peg "<<from<<" to peg "<<to<<endl;
		return;
	}
	toh(n-1,from,buffer,to);
	cout<<"Move disk "<<n<<" from peg "<<from<<" to peg "<<to<<endl;
	toh(n-1,buffer,to,from);
}
int main(){
	int c;
	cout<<"Enter the number of disks :\n";cin>>c;
	cout<<"The sequence of moves involved in the Tower of Hanoi are : \n";
	toh(c,'A','C','B');
	return 0;
}