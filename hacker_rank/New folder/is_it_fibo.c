#include<conio.h>
#include<stdio.h>
main()
{
	int i,j,t,n,flag=0;
	long long int a[100000],b[100000];
a[0]=0;a[1]=1;
for(i=2;i<50;i++)
{
	a[i]=a[i-1]+a[i-2];
}
scanf("%d",&t);

	for(i=0;i<t;i++)
	{
		scanf("%lld",&b[i]);
		for(j=0;j<50;j++)
		{
			if(b[i]==a[j])
			flag=1;
		}
	if(flag==1)printf("IsFibo\n");
	else printf("IsNotFibo\n");flag=0;
	}

getch();
}
