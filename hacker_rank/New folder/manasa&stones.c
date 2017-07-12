#include<conio.h>
#include<stdio.h>
void  main()
{
int i,j,t,n,a,b,a1[1000],a2[1000],k=0;
scanf("%d",&t);
a1[0]=0;a2[0]=0;
while(t--)
{
	scanf("%d",&n);
	scanf("%d",&a);
	scanf("%d",&b);
	k=b-a;
	for(i=1;i<n;i++)
	a1[i]=a1[i-1]+a;
	for(i=1;i<n;i++)
	a2[i]=a2[i-1]+b;
	for(i=a1[n-1];i<=a2[n-1];i=i+k)
	printf("%d ",i);
a1[0]=0;a2[0]=0;
}
}
