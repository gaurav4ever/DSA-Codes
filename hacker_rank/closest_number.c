#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	int n,i,j,min=0,temp=0,a[100000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>0)min=a[i];
	}
	a[n]=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

	for(i=0;i<n-1;i++)
	{	
		if(a[i+1]-a[i]<=min && a[i+1]-a[i]>0)min=a[i+1]-a[i];
	}
for(i=0;i<n;i++)
	{	
		if(a[i+1]-a[i]==min)printf("%d %d ",a[i],a[i+1]);
	}
    return 0;
}
