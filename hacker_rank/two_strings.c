#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
        int i,len1,len2,counta[26]={0},countb[26]={0},flag=0;
	char a[100000]={0},b[100000]={0};
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
                {
		            if((counta[i]*countb[i])>0){flag=1;break;}
                }
	}  
	if(flag==1)printf("YES\n");
	else printf("NO\n");
	}
    return 0;
}

