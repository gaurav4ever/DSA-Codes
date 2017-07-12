#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int i,n,x,m,a[1000010]={0},b[1000010]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		a[x]--;
	}
    scanf("%d",&m);
	for(i=0;i<m;i++)
	{	
		scanf("%d",&x);
		a[x]++;
	}
	for(i=0;i<1000010;i++)
	{
		if(a[i]>0)
			printf("%d ",i);
	}
    return 0;
}
