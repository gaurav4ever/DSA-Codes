#include<stdio.h>
#include<conio.h>

int main()
{
	int n,m,a[100],b[10],c[10],temp,i,min,j,k=0,fault=0;
	printf("Enter the no of characters: ");
	scanf("%d",&n);
	printf("Enter the characters:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the no of frames: ");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	c[i]=b[i]=-1; 						
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{c[j]=i; 
			break;}
		}
			
		if(j==m)
		{
			fault++;
			min=i;
			for(k=0;k<m;k++)
			{
				if(min>c[k])
				{
					min=c[k];
					temp=k;
				}
			}
			c[temp]=i;
			b[temp]=a[i];
		}
		
		printf("\n%d  ->>  ",a[i]);
		for(k=0;k<m;k++)
		{
			if(b[k]!=-1)
			printf("%d ",b[k]);
		}
		if(j!=m)
		printf("  Page Hit!!!");
	}
	printf("\n\nThe total page faults are %d",fault);
	getch();	
}
