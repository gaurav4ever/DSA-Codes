#include <iostream>
#include <unistd.h>
#include <stdio.h>

using namespace std;
void child(){
	for(int i=0;i<50;i++)
		cout<<"I am Child "<<i;
}
void parent(){
	for(int i=0;i<50;i++)
		cout<<"I am Parent "<<i;
}
int main(){
	pid_t pid=fork();
	if(pid<0)cout<<"Fork Failed";
	else if(pid==0)child();
	else parent();
	return 0;
}