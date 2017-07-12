#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	long long int a,b,i,j,d,d1,d2,flag=0;
	scanf("%lld %lld",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(i>1&&i<10)d=10;
		else if(i>10&&i<100)d=100;
		else if(i>100&&i<1000)d=1000;
		else if(i>1000&&i<10000)d=10000;
		else d=100000;

		j=i*i;
		d1=j/d;
		d2=j%d;
		if(i==d1+d2){printf("%lld ",i);flag=1;}
	}
	if(flag==0)printf("INVALID RANGE");
    return 0;
}

