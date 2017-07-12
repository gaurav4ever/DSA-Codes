#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
int main()
{
	int n,i,j,len=0;
	char str[1000];
	scanf("%d",&n);
	scanf("%s",str);
	len=strlen(str);
	for(i=0;str[i]!='\0';i++)
	{ S:
		for(j=0;j<i;j++)
		{
			if(i!=j && str[j]==str[i])
			{
				i++;goto S;
			}
		}
        printf("%c",str[i]);
	}   
   return 0;
}
