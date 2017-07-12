#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
   long long int n,i,a,b,sum1=0,sum2=0;
	scanf("%lld",&n);a=n;
 while (a%2 == 0)
    {
        sum1+=2;a=a/2;
    }
    for(i=3;i<=sqrt(a);i=i+2)
    {
		while(a%i==0)
		{
			if(a>9)
			{
				b=i;
				while(b>0)
				{
					sum1+=b%10;
					b=b/10;
				}
			}
			else
            {sum1+=i;}
		a=a/i;
        }
    }
	if (a>2)
		{
        	while(a>0)
			{
            	sum1+=(a%10);
            	a=a/10;
        	}
   		}
	
	while(n>0)
	{
		sum2+=n%10;
		n=n/10;
	}
	if(sum1==sum2)printf("1");
	else printf("0");
    return 0;
}
