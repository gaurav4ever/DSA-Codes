#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
	int t,n,i,x;
	long long int count=0;
	scanf("%d",&t);
	while(t--)
	{
	long long int a[100001]={0};
		count=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
			{
				scanf("%d",&x);
				a[x]++;
			}
		for(i=1;i<=100000;i++)
		{
			if(a[i]!=0)
			{
		    count=count+(a[i]*(a[i]-1));   
			}
		}
	printf("%lld\n",count);
	}   
    return 0;
}

