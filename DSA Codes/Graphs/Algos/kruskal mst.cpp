#include <iostream>
#include <conio.h>
using namespace std;

#define v 6
void sort(int a[6][3]){
	for(int i=0;i<v-1;i++){
		for(int j=i+1;j<v;j++){
			if(a[i][2]>a[j][2]){
				int temp=a[i][0];
				a[i][0]=a[j][0];
				a[j][0]=temp;

				temp=a[i][1];
				a[i][1]=a[j][1];
				a[j][1]=temp;

				temp=a[i][2];
				a[i][2]=a[j][2];
				a[j][2]=temp;
			}
		}
	}
}
int mst[4][3]={0},k=0;
bool check(int x,int y){
	int flag1=0,flag2=0,flag=0;
	for(int i=0;i<4;i++){
		if(x==mst[i][0] || x==mst[i][1])flag1=1;
		if(y==mst[i][0] || y==mst[i][1])flag2=1;

		if(flag2==1 && flag1==1){flag=1;break;}
	}
	if(flag==1)return true;
	return false;
}
void kmst(int a[6][3]){
	for(int i=0;i<v;i++){
		if(check(a[i][0],a[i][1])==false){
			mst[k][0]=a[i][0];
			mst[k][1]=a[i][1];
			mst[k][2]=a[i][2];
			k++;
		}
	}
}
int main(){
	int g[6][3]={
			{1,2,5},
			{1,3,3},
			{4,1,6},
			{2,4,7},
			{3,2,4},
			{3,4,5},
		};
	sort(g);
	kmst(g);

	for(int i=0;i<k;i++){
		for(int j=0;j<3;j++){
			cout<<mst[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}