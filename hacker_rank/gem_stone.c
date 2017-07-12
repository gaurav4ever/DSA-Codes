#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
   int n,i,j,count[26]={0},ans=0;
	char str[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str);
			for(j=0;str[j]!='\0';j++)
			{
				if(count[str[j]-'a']==i)
					count[str[j]-'a']++;
			}
	}
	for(i=0;i<26;i++)
		{
			if(count[i]>=n)ans++;
		}
	printf("%d",ans);
    return 0;
}
