#include<iostream>
using namespace std;
class A{
	private:
		int x;
	public:
		A(){
			x=10;
		}

		friend void add(A &,B &);
};
class B{
	private:
		int y;
	public:
		B(){
			y=20;
		}
friend void add(A &,B &);
};
void add(A &a,B &b){
	cout<<a.x+b.y;
}
int main(){
	A a;
	B b;
	add(a,b);
	return 0;
}