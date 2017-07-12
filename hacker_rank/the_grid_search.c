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
	   int i,j,R,C,r,c,a[1000][1000],b[1000][1000],flag=0;
		scanf("%d %d",&R,&C);
		for(i=0;i<R;i++)
			for(j=0;j<C;j++)
				scanf("%d",&a[i][j]);
		scanf("%d %d",&r,&c);	
		for(i=0;i<r;i++)
			for(j=0;j<c;j++)
				scanf("%d",&b[i][j]);
		for(i=0;i<R;i++)
		{
			for(j=0;j<C;j++)
			{flag=0;
				if(a[i][j]==b[0][0])
					{
						for(i=0;i<r;i++)
						{
							for(j=0;j<c;j++)
							{
								if(a[i][j]==b[i][j])flag+=1;
								else flag-=1;
							}
						}
					}
			}
		}
	if(flag==r*c)printf("YES\n");
	else printf("NO\n");
	}    
    return 0;
}

