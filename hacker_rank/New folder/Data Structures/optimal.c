#include<stdio.h>
#include<conio.h>

int main()
{
	int n,m,a[100],b[10],temp,i,max,j,k=0,l,fault=0;
	printf("Enter the no of characters: ");
	scanf("%d",&n);
	printf("Enter the characters:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the no of frames: ");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	b[i]=-1; 
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
			break;
		}
			
		if(j==m)
		{
			fault++;
			max=0;
			for(k=0;k<m;k++)
			{
				for(l=i+1;l<n;l++)
					if(b[k]==a[l])
					break;
				if(max<l)
				{
					max=l;
					temp=k;				
				}
			}
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
