#include <bits/stdc++.h>
using namespace std;
int main() {

    char str[82]={0};
	int i,j,count=0,ff,cf,k=0;
	cin>>str;
	count=strlen(str);
	ff=sqrt(count);
	if(ff*ff==count)cf=ff;
	else
	{
		cf=ff+1;
		if(ff*cf<count)
		{
			ff=ff+1;
		}
	}
	for(i=0;i<cf;i++)
	{
		for(j=0;j<ff;j++)
            {
            if(i+j*cf<count){
                cout<<str[i+j*cf];
            }
        }
        cout<<" ";
	}
    return 0;
}
