#include<conio.h>
#include<stdio.h>
main()
{
	int sum=0,t,n,i,tn[10000];
scanf("%d",&t);
while(t--)
{
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		tn[i]=(i*i)-((i-1)*(i-1));
	}
	for(i=1;i<=n;i++)
	{
		sum+=tn[i];
	}
printf("%d\n",sum);sum=0;
}
return 0;
}
