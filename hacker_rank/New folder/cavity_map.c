#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
	int n,i,j;
	char a[110][110];
	scanf("%d",&n);	
	for(i=0;i<n;i++)
			scanf("%s",&a[i]);
	for(i=1;i<n-1;i++)
	{
		for(j=1;j<n-1;j++)
			{
				if(a[i][j]>a[i-1][j]&&a[i][j]>a[i+1][j]&&a[i][j]>a[i][j-1]&&a[i][j]>a[i][j+1])a[i][j]='X';
			}
	}
	for(i=0;i<n;i++)
	{
		 printf("%s\n",a[i]);
	}
   return 0;
}
