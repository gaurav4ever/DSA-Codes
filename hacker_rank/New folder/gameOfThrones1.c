#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	char s[100000];
	int len,i,j=0,count[26]={0},ans=0;
	scanf("%s",s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		count[s[i]-'a']++;
	}
	for(i=0;i<26;i++)
	{
		if(count[i]%2==0)count[j++]=0;
		else count[j++]=1;
	}
	for(i=0;i<26;i++)
	{
		if(count[i]==1)ans++;
	}
	if(ans>1)printf("NO");
	else printf("YES");
	return 0;
}
