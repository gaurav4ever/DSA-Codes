#include <iostream>
using namespace std;
class A;

class B{
private:
	int y;
public:
	B(){
		y=10;
	}
	void add(A &); //dont need to define the arguments
};

class A{
private:
	int x;
public:
	A(){
		x=5;
	}
	friend void B::add(A &a);
};

void B::add(A &a){
	cout<<y+a.x;
}

int main(){
	A a;
	B b;
	b.add(a);
	return 0;
}