#include <iostream>
#include <math.h>
using namespace std;
int main(){
	char grid[128][128],word[32];
	int n,m;
	cout<<"Enter n : ";
	cin>>n;
	cout<<"Enter m : ";
	cin>>m;

	cout<<"Enter charachters in grid : ";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>grid[i][j];
		}
	}


	int t;
	cout<<"Test Cases : ";
	cin>>t;
	while(t--){
		
		char g[n][m];

		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				g[i][j]=grid[i][j];
			}
		}


		int w;
		cout<<"Enter word size : ";cin>>w;
		for(int i=0;i<w;i++)cin>>word[i];

		int s=w,flag=0,k=1,ans=0;
		int posi=0,posj=0;

		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(word[0]==g[i][j]){
					posi=i;
					posj=j;
				}
			}
		}
		
		int i,j;
		while(1){

			i=posi;j=posj;
			cout<<posi<<","<<posj;
			g[posi][posj]='0';
			cout<<" "<<g[posi][posj]<<endl;

			if(word[k]==g[i-1][j-1]){
				k++;
				posi=i-1;
				posj=j-1;
			}else if(word[k]==g[i-1][j]){
				k++;
				posi=i-1;
				posj=j;
			}else if(word[k]==g[i-1][j+1]){
				k++;
				posi=i-1;
				posj=j+1;
			}else if(word[k]==g[i][j-1]){
				k++;
				posi=i;
				posj=j-1;
			}else if(word[k]==g[i][j+1]){
				k++;
				posi=i;
				posj=j+1;
			}else if(word[k]==g[i+1][j-1]){
				k++;
				posi=i+1;
				posj=j-1;
			}else if(word[k]==g[i+1][j]){
				k++;
				posi=i+1;
				posj=j;
			}else if(word[k]==g[i+1][j+1]){
				k++;
				posi=i+1;
				posj=j+1;
			}else{
				break;
				ans=0;
			}

			if(k==w){ans=1;break;}
		}

		if(ans==1)cout<<"True"<<endl;
		else cout<<"False"<<endl;
	}
	
	return 0;
}