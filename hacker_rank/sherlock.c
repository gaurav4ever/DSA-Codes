#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,k,l,t,n,a[100000],suml=0,sumr=0,count=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);

		for(j=0;j<n;j++)
		{
			if(j==0)
			{
				suml=0;
				for(l=(j+1);l<n;l++)sumr+=a[l];
			}
			else if(j==(n-1))
			{
				sumr=0;
				for(k=0;k<j;k++)suml+=a[k];
			}
			else
			{
				for(k=0;k<j;k++)suml+=a[k];
				for(l=(j+1);l<n;l++)sumr+=a[l];
			}
			if(sumr==suml)count++;
			sumr=0;suml=0; k=0;l=0;
		}
		if(count>0)printf("YES\n");
		else printf("NO\n");  count=0;
	}
		getch();
}