#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	int n,i,t,flag=0,a=0,b=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=n;i>=0;i--)
		{
			if(i%3==0 && (n-i)%5==0)
			{	
				a=i;b=n-i;flag=0;break;
			}	
			else flag=1;
		}
		if(flag==1)printf("-1");
		for(i=0;i<a;i++)printf("5");
		for(i=0;i<b;i++)printf("3");printf("\n");
		flag=0;a=0;b=0;
	}    
    return 0;
}
