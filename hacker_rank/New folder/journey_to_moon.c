#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,l,a[100][100],i,j,k=0,pair=0;
    scanf("%d%d",&n,&l);
	for(i=0;i<l;i++)
		for(j=0;j<l;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<l;i++)
    {
		for(j=0;j<l;j++)
			{
					if(a[k][i]!=a[k+1][j])pair++;
			}
    }
	printf("%d",pair);
    return(0);
}

