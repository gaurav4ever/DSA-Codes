#include <iostream>
#include <conio.h>
using namespace std;
void tower(int n,char from,char to,char buffer){
	if(n==1){
		cout<<" Disk "<<n<<" moved from rod "<<from<<" to "<<to<<endl;
		return;
	}
	tower(n-1,from,buffer,to);
	cout<<" Disk "<<n<<" moved from rod "<<from<<" to "<<to<<endl;
	tower(n-1,buffer,to,from);
}
int main(){
	int n=8;
	tower(n,'A','C','B');
	getch();
	return 0;
}