#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long int t,i,s,q,r,x,v=0;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {   v=0;
        scanf("%lld",&s);
        q=s/21;
        r=s%21;
        v=v+44*q;   
        x=v;
        while(x>0)
        {
            x=x/42;
            
            v=v+2*x;
        }
        v=v%(1000000000+7);            
        while(r>0)
        {
            v++;
            if(v%2==0&&v!=42)
            {
                r--;
            }                    
            v=v%(1000000000+7);
        }        
        printf("%lld\n",v);
    }
    return 0;
}

