#include <iostream>
using namespace std;
int max(int a,int b){
	if(a<b)return b;
	return a;
}
int main(){
	int n;
	cout<<"Enter size of string : ";
	cin>>n;
	char c[n];
	cout<<"Enter string char by char : ";
	for(int i=0;i<n;i++)cin>>c[i];

	int p[n][n]={0};
	for(int i=0;i<n;i++)for(int j=0;j<n;j++)p[i][j]=1;

	int i=0,j=1;
	while(j<=n-1){
		int x=i,y=j;
		while(y<=n-1){
			if(c[x]==c[y]){
				p[x][y]=2+p[x+1][y-1];
			}else{
				p[x][y]=max(p[x][y-1],p[x+1][y]);
			}
			x++;y++;
		}
		j++;
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<p[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<"Length of longest palindromic subsequence is : "<<p[0][n-1]<<endl;

	i=0;j=n-1;
	int g=p[0][n-1];
	char ans[g];

	int a=i,b=j-1;
	while(i<=j){
		if(c[i]==c[j]){
			ans[a]=c[i];
			ans[b]=c[j];
			i++;
			j--;
			cout<<ans[b]<<" "<<ans[a]<<endl;
			a++;b--;
		}else{
			if(p[i][j-1]>p[i+1][j]){
				j--;
			}else{
				i++;
			}
		}
	}

	for(int i=0;i<g;i++)cout<<ans[i];

	return 0;
}