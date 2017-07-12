#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n,i,maxx=0,max=0,min=0,s[1000],count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
for(i=0;i<n;i++)
	{

		if(s[i]>max)
		{
		maxx=i;
		}
	}
min=s[n-1];
while(s[maxx]>0)
{
	for(i=0;i<n;i++)
	{
		if(s[i]>0)
		{
		if(s[i]<min)
		min=s[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(s[i]>0)
		{
			s[i]=s[i]-min;
			count++;
		}
	}
	for(i=0;i<n;i++)
	{

		if(s[i]>max)
		{
		min=s[i];
		maxx=i;
		}
	}
printf("%d\n",count);
	count=0;
}
    return 0;
}
