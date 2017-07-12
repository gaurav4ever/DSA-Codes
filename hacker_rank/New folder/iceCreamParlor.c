#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    	int j,s,t,m,i,n,a[10000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&m);
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
		for(i=1;i<=n;i++)
		{
			for(j=i;j<=n;j++)
			{
				if(i!=j && a[i]+a[j]==m)
				{	
					printf("%d %d\n",i,j);
				}
			}
		}
	}    
    return 0;
}
