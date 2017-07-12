#include<conio.h>
#include<stdio.h>
void main()
{
	int k,j,h,t,n,i;
	h=1;k=1;
	scanf("%d\n",&t);
	while(k<=t)
	{
		scanf("%d",&n);
		for(j=1;j<=n;j++)
		{	
		if(j%2==0)
		h=h+1;
		else 
		h=h*2;
		}
		printf("%d\n",h);
		k++;
		h=1;
	}
	getch();
}
