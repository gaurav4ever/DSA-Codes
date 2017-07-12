#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long int t,sumn=0;
    scanf("%lld",&t);
    while(t--)
       {
           int i,j,n,a[100000],sum=0,k=1;
            scanf("%d",&n);
		sumn+=n;
		if(sumn<=1000000)
		{
		
        for(i=0;i<n;i++)
                scanf("%d",&a[i]);
        for(i=0;i<n;i++)
            {
            if(a[i]<0)
            {
                if(k>0)
                {sum+=abs(a[i]);k=-1;}
                else if(k==-1)
                {sum+=a[i];   
                if(sum<0){printf("%d\n",i+1);break;}
                }
			if(i==n-1&&sum>0){printf("She did it!\n");break;}

            }
            else if(a[i]>=0)
            {
                sum+=a[i];
                if(i==n-1 && sum>0){printf("She did it!\n");break;}
            }
        }
		}
    }
    return 0;
}

