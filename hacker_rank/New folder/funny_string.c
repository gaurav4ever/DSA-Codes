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
    char s1[10000]={0},s2[10000]={0},a[10000]={0},b[10000]={0};
	int i,j,len,flag=-1;
	scanf("%s",s1);
	len=strlen(s1);
	for(i=0,j=len-1;j>=0;i++,j--)
	{
		s2[i]=s1[j];
	}
	for(i=1,j=0;i<len;i++,j++)
	{
		a[j]=abs(s1[i]-s1[i-1]);
		b[j]=abs(s2[i]-s2[i-1]);
	}
	for(i=0;i<len-1;i++)
	{
		if((a[i]-b[i])==0)flag=1;
		else {flag=0;break;}
	}
	if(flag==1)printf("Funny\n");
	else printf("Not Funny\n");
	}
    return 0;
}
