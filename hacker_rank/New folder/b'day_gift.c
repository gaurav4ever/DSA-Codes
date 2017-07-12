#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i,n;
    double a[40],sum=0,pro=0;
    scanf("%d",&n);
      for(i=0;i<n;i++)
            {
                scanf("%lf",&a[i]);
      }
        for(i=0;i<n;i++)
                {
                    sum+=a[i];
        }
    pro=sum/2.0;
    printf("%.1lf",pro);
    return 0;
}

