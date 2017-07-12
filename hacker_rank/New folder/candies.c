#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    int n,a[100000],i,sum=0,k=1,g=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
	sum=k;
    for(i=1;i<n;i++)
        {
			if(a[i]>a[i-1]){k+=1;sum+=k;g++;}
			else if(a[i]<a[i-1])
			{
				if(k==1){sum+=k;g=0;}
				else {k-=g;sum+=k;g=0;}
			}
			else if(a[i]==a[i-1])
			{
				if(k==1){sum+=k;g=0;}
				else {k-=1;sum+=k;g=0;}
			}
			
    }
	printf("%d",sum);
    return 0;
}

