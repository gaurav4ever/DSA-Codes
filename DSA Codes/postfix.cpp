#include <iostream>
#include <string.h>
#include <stack>
#include <stdio.h>

using namespace std;
int main(){
	stack<int> stack;
	char s[100];
	cin>>s;
	int len=strlen(s);
	for(int i=0;i<len;i++){
		if((s[i]>='1' && s[i]<='9')){
			stack.push(s[i]-'0');
		}else{
			int val1=stack.top();stack.pop();
			int val2=stack.top();stack.pop();
			
			switch(s[i]){
				case '+':stack.push(val1+val2);
						break;
				case '-':stack.push(val1-val2);
						break;
				case '*':stack.push(val1*val2);
						break;
				case '/':stack.push(val1/val2);
						break;

			}
		}
	}
	cout<<stack.top();
	return 0;
}