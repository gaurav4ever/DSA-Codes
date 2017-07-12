#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int k;
		scanf("%lld",&k);
		printf("%lld\n",(k*k)/4);
	}
    return 0;
	getch();
}

