#include<conio.h>
#include<stdio.h>
main()
{
	int sum=0,t,n,i,tn[10000],m;
scanf("%d",&t);
while(t--)
{
	scanf("%d",&n);
	scanf("%d",&m);
	for(i=1;i<=n;i++)
	{
		tn[i]=i%m;
	}
	for(i=1;i<=n;i++)
	{
		sum+=tn[i];
	}
printf("%d\n",sum);sum=0;
}
return 0;
}
