#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	int i,j=0,n,k,q,Q[500],a[100001],b[100001];
	scanf("%d %d %d",&n,&k,&q);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=n-1;i>=0;i--)
	{
		if((i+k)>=n)b[i+k-n]=a[i];
		else b[i+k]=a[i];
	}
	for(i=0;i<q;i++)scanf("%d",&Q[i]);
	for(i=0;i<q;i++)
		printf("%d\n",b[i]); 
    return 0;
}
