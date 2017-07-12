#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int t;scanf("%d",&t);
    while(t--)
        {
        int i,j,a[40],ans=0,n,max=0,prime[300000],count=0;
        scanf("%d",&n);
        a[1]=1;a[2]=1;a[3]=1;a[4]=2;
        for(i=5;i<=40;i++)
            {
                a[i]=a[i-1]+a[i-4];
        }
        for(i=1;i<=40;i++)
            if(n==i)max=a[i];
      
    
            for(i=2;i<=max;i++)prime[i]=1;
            for(i=2;i*i<=max;i++)
                {
                    if(prime[i]==1)
                    for(j=i;i*j<=max;j++)
                       {
                            prime[i*j]=0;
                            
                    }
            }
        for(i=2;i<=max;i++)
            if(prime[i]==1)count++;
        printf("%d\n",count);count=0;
            
    }
   
    return 0;
}
