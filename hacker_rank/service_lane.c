#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	int t,n,k,i,j,a[100000],min=0;
	scanf("%d %d",&n,&t);
	 for(i=0;i<n;i++)
			scanf("%d",&a[i]);
	while(t--)
	{
		scanf("%d %d",&i,&j);
        min=a[i];
		for(k=i;k<=j;k++)
		{
			if(a[k]<=min)min=a[k];
		}
	printf("%d\n",min);min=a[0];
	}  
    return 0;
}

