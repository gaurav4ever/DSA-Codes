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
		int i,n,a[100000],sumc=0,sumnc=0,max=0;
		scanf("%d",&n);	
		for(i=0;i<n;i++)scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		{
				if(a[i]>0)sumc+=a[i];
		}
		for(i=0;i<n;i++)
		{	
			sumnc+=a[i];
			  if(sumnc<0)sumnc=0;
                if(max<sumnc)
				{max=sumnc;}
		    
		}
		printf("%d %d\n",max,sumc);
	}    
    return 0;
}

