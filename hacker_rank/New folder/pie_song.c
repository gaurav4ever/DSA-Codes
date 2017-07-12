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
		char str[500];
        long long int i=0,flag=0,word[30]={0},k=0,pi[29]={3,1,4,1,5,9,2,6,5,3,5,8,9,7,9,3,2,3,8,4,6,2,6,4,3,3,8,3,3};
		scanf(" %[^\t\n]s",str);
		while(str[i]!='\0')
		{
			
			if(str[i]==' ')k++;
			else word[k]++;
            i++;
		}
		for(i=0;i<=k;i++)
		{
			if(word[i]==pi[i])flag=1;
			else {flag=0;break;}
		}
		if(flag==0)printf("It's not a pi song.");
		else printf("It's a pi song.");
		
        printf("\n");
	}    
    return 0;
}

