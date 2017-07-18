#include <iostream>
using namespace std;
int main(){
	void *ptr;
	cout<<ptr<<endl; //garbage value.

	int x=5;
	ptr=&x; //pointer becomes int
	cout<<*(int*)ptr<<endl;

	char a='g';
	ptr=&a;
	cout<<*(char*)ptr; //pointer becomes char
	return 0;
}