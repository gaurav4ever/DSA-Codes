#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a[32][32]={0},n=31,m=2,i=0,j=0,k=5,g;
		scanf("%d",&g);
		a[31][0]=1;a[31][1]=4;a[30][0]=2;a[30][1]=3;
		for(i=0;i<15;i++)
		{
			for(j=n;(j+m)>=31;j--)
				a[j][m]=k++;
			for(j=m-1;j>=0;j--)
				a[n-m][j]=k++;
			for(j=0;(n-m-1+j)<=31;j++)
				a[n-m-1][j]=k++;
			for(j=n-m;j<=31;j++)
				a[j][m+1]=k++;
			m=m+2;
		}
		for(i=0;i<31;i++)
		{
			for(j=0;j<31;j++)
				{
					if(a[i][j]==g)
						printf("Case %d: %d %d\n",t,j,i);
				}
		}
	}  
    return 0;
}
