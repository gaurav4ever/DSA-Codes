#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n,t,len=0,count=0,j,k,num,a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		k=n;
		j=n;num=n;a=num;b=num;
		while(num>0)
		{
			num=num%10;len++;
			a=a/10;
			num=a;
		}
		while(len>0)
		{
			n=n%10;
			if(n!=0)
			if(k%n==0)count++;
			j=j/10;
			n=j;
			len--;
		}
		printf("%d\n",count);
		count=0;n=0;j=0;k=0;
	}
    return 0;
}

