#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    int t;
    scanf("%d",&t);
    while(t--)
        {
        long long int l,k,s,ans,i,mod=1000000007;
        scanf("%lld",&s);
        if(s%20!=0)
            {
            s= (s/20+s)%mod;
        }
        else
            s=(s/20+s-1)%mod;
        ans=s*2;ans%=mod;
        printf("%lld\n",ans);
    }
    return 0;
}
