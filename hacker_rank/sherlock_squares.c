#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,a,a1,b1,b,count=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&a);
		scanf("%d",&b);
        a1=sqrt(a);b1=sqrt(b);
        if(a1*a1==a)a1--;
        count=b1-a1;
		printf("%d\n",count);
		count=0;
	}
    return 0;
}

