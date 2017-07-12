#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int t,l,b,c,n,m,i,j=0,a[1000]={0},ans=0;
	 scanf("%d",&t);
	 while(t--)
		  {
		  scanf("%d",&l);
		  scanf("%d",&b);
		  if(l<=b)m=l;
		  else m=b;
		  for(i=1;i<=m;i++)
		  {
				if(l%i==0&&b%i==0)
				{
					 ans=l/i*b/i;
				}
		  }
		  printf("%d\n",ans);
	 }
    return 0;
}
