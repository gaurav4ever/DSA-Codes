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
		int i,n,k,a[1000],count=0;
		scanf("%d %d",&n,&k);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
			if(a[i]>=0)count++;
		if(count>=k)printf("NO\n");
		else printf("YES\n");
	}  
    return 0;
}

