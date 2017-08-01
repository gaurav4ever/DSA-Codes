#include <bits/stdc++.h>
using namespace std;
int main(){

	int counter=0;

	string str="123456";
	
	int n=str.length();
	 for (int i = 0; i <n; i++)
        {
        string c="";
        c.append(1,str[i]);
            for (int k = i+1; k <= n; k++)
            {
            	counter++;
                cout << c<<"\n";
                if(k<n)
                c.append(1,str[k]);
            }
        }

        cout<<"\n"<<counter;
	return 0;
}