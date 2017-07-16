#include <iostream>
using namespace std;

class A{
private:
	int x;
public:
	A(){
		x=5;
	}
	friend class B;
};
class B{
private:
	int y;
public:
	B(){
		y=10;
	}
	void add(A &a){
		cout<<y<<" "<<a.x<<endl;
		int ans=y+a.x;
		cout<<ans;
	}
};
int main(){
	A a;
	B b;
	b.add(a);
	return 0;
}