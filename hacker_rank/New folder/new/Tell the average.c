#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int mod=1000000007;
int main() {

   long long int n,l[10001],a,b,i,k=1;
    scanf("%lld",&n);
    for(i=0;i<n;i++)scanf("%lld",&l[i]);
   while(n>1)
        {
            a=l[0];
            b=l[k++];n--;
            l[0]=a+b+(a*b)%mod;
    }
    printf("%lld",l[0]%mod);
    return 0;
}
