#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	int t,n,i,a[100000],b[100000],c[100000],val=0,j=0,k,count=0;
	long long int suml=0,sumr=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			{	b[i]=suml;
				scanf("%d",&a[i]);
				suml+=a[i];	
			}
		for(i=n-1;i>=0;i--)
			{
				c[i]=sumr;
				sumr+=a[j];
			}
		for(i=0;i<n;i++)
		{
			if(b[i]==c[i])
			{printf("YES");break;}
			else printf("NO\n");
		}      
    return 0;
}

