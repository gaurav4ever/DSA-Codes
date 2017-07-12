#include<conio.h>
#include<stdio.h>
main()
{
int n,a[100],i,j,count=0;
scanf("%d",&n);
if(n%2!=0)
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
			else{continue;}
		}
if(count==1)printf("%d",a[i]);
count=0;
}
return 0;
}
