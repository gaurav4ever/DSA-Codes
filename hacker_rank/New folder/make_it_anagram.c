#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
	int i,len1,len2,counta[26]={0},countb[26]={0},del=0;
	char a[10000]={0},b[10000]={0};
	scanf("%s",a);len1=strlen(a);
	scanf("%s",b);len2=strlen(b);  
	for(i=0;i<len1;i++)
	{
		counta[a[i]-'a']++;
	}
	for(i=0;i<len2;i++)
	{
		countb[b[i]-'a']++;
	}
	for(i=0;i<26;i++)
	{
		del+=abs(counta[i]-countb[i]);
	}
	printf("%d",del);
    return 0; 
}

