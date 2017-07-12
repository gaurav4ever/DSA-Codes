#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	int n,a[100][100],i,j;
	    for(i=0;i<n;i++)
			for(j=0;j<n;i++)	
				scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	{
			for(j=0;j<n;i++)
			{
					printf("%d",a[i][j]);
			}	printf("\n");
	}
    return 0;
}

