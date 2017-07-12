#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,key,a[100],n;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	for(j=1;j<n;j++)
	{
		key=a[j];
		i=j-1;
		while(i>-1&&a[i]>key)
		{
			a[i+1]=a[i];
			i--;
			
		}
		a[i+1]=key;
printf("\n");
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	}
	
}
