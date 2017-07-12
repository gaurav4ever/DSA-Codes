#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
long long int i,t,n,a[1000],ans=1;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		for(i=0;i<n-1;i++)
		{
			scanf("%lld",&a[i]);
			ans*=a[i];ans=ans%1234567;
		}
		printf("%lld\n",ans);ans=1;
	}
    return 0;
}
