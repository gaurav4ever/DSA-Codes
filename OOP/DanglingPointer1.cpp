#include <iostream>
using namespace std;
int* fun(){
	int x=5;
	return &x;
}
int main(){
	int *ptr=new int;
	cout<<ptr<<endl;
	delete(ptr);
	cout<<ptr<<endl;

	int *ptr2=fun();
	cout<<ptr2<<endl;
	return 0;

	int *ptr3;
	{
		int x=5;
		ptr3=&x;
	}
	cout<<ptr3;
}