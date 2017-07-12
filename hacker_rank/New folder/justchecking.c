#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
        {
        char a[100][100];
	int len,i,j,k,temp=0,n,flag=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%s",a[i]);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=j+1;k<n;k++)
			{
			
				if(a[i][j]>=a[i][k])
				{
					temp=a[i][j];
					a[i][j]=a[i][k];
					a[i][k]=temp;
				}
			}
		}
	}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				for(k=j+1;k<n;k++)
				{
						if(a[j][i]>a[k][i])
							flag=0;break;
				}
			}
		}
	if(flag==1)printf("YES\n");
	else printf("NO\n");
    }
    return 0;
}

    

