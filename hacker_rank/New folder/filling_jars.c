#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	long long int n,m,count=0,a,b,k;
	scanf("%lld %lld",&n,&m);
	while(m--)
	{
		scanf("%lld %lld %lld",&a,&b,&k);
		count=count+(b-a+1)*k;
	}               
	printf("%lld",count/n);       
    return 0;
}

