#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the value of n :";cin>>n;

	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];

	int key,i;
	for(int j=1;j<n;j++){
		key=a[j];
		i=j-1;
		while(i>-1 && a[i]>key){
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=key;
	}
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	
	return 0;	
}