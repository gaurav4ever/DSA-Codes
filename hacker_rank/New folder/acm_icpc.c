#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	int n,m,i,j,count=0,max=0,pair=0,k=0;
	char a[500][500];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
			scanf("%s",a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
            {   while(k<m)
                   {
                      if(a[i][k]=='1'||a[j][k]=='1')count++;k++;
                    }
             if(count>max){max=count;pair=1;}
                else if(count==max)pair++;
             k=0;count=0;
            }
    }
    printf("%d\n%d",max,pair);
    return 0;
}
