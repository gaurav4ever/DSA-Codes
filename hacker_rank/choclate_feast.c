#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t, n, c, m,cm,cw,uw,a=0;
    scanf("%d", &t);
    while ( t-- )
    {
        scanf("%d%d%d",&n,&c,&m);
        int answer = 0;cm=n/c;a=cm;
		do
		{	 
			cw=a/m;
			uw=a%m;
			answer+=cw;
			a=uw+cw;
		}while(cw!=0);
		printf("%d\n",answer+cm);
		cm=cw=uw=0;
    }
    return 0;
}
