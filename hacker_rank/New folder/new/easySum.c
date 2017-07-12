#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;scanf("%d",&t);
       while(t--)
            {
                long long int i,n,m,sum=0,q,r;
           scanf("%lld %lld",&n,&m);
           if(m==1)printf("0\n");
           else{
            if(n<m)
               {
                sum=n*(n+1)/2;
               printf("%lld\n",sum);
           }
           else if(n%m==0)
               {
               q=n/m;
               sum=q*m*(m-1)/2;
            printf("%lld\n",sum);
           }
           else 
               {
               q=n/m;
               r=n%m;
               sum=q*m*(m-1)/2;
               sum=sum+r*(r+1)/2;
               printf("%lld\n",sum);
           }
           }
       }
    return 0;
}
