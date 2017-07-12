#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	long long int n,a[1000000],sum=0,i,ans=0,total;
	scanf("%lld",&n);
	for(i=0;i<n;i++)scanf("%lld",&a[i]);
	for(i=0;i<n;i++)
	{
		sum+=a[i];
        ans+=(i+1)*a[i];
	}
    total=ans;
    for(i=0;i<n;i++)
        {
                ans=ans-sum+n*a[i];
            if(ans>total)total=ans;
    }
    printf("%lld",total);

}
