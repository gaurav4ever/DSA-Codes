#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int t;
    scanf("%d",&t);
    while(t--)
        {
        long long int b,w,x,y,z,total=0;
        scanf("%lld%lld%lld%lld%lld",&b,&w,&x,&y,&z);
       	if(x+z<=y) total=(b+w)*x+(z*w);
		else if(y+z<=x) total=(b+w)*y+(z*b);
		else total=b*x+y*w;
		printf("%lld\n",total);
		}
       return 0;
}


