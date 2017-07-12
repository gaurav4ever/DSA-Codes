#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
        scanf("%d",&t);
        while(t--)
        {
                  int g,i,j=0,n,a[100000],b[100000],c[100000],k=0,check;
                scanf("%d %d",&n,&check);
            for(i=0;i<100000;i++)a[i]=i;
            for(i=0,k=0;i<n;i+=2,k++)
            {
                b[i]=a[n-1-k];
				b[i+1]=a[k];
            }
       for(i=0;i<n;i++)
		{
			if(check==b[i])printf("%d\n",i);
		}
        }

    return 0;
}

