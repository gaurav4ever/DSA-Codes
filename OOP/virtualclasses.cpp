#include<iostream>
using namespace std;
class shape{
	private:
		int x;
	public:
		shape(int a){x=a;}
		void area(){
			cout<<"parent";
		}

};
class rec:public shape{
	
	public:
		rec(int a):shape(a){}		
		void area(){
			cout<<"rec";
		}

};
class tri:public shape{
	
	public:
		tri(int a):shape(a){}		
		void area(){
			cout<<"tri";
		}

};
int main(){
shape *s;
rec r(10);
tri t(10);
s=&r;
s->area();
cout<<endl;
s=&t;
s->area();

	return 0;

}