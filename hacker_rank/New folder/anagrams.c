#include<stdio.h>
#include<string.h>
int main()
{
	int tc,t,i,count[26],countb[26],step,n;
	char a[10001];
	scanf("%d",&tc);
	for (t=0;t<tc;t++)
	{
		scanf("%s",a);
		n=strlen(a);
		if (n%2==1)
		printf("-1\n");
		else
		{
			step=0;
			for (i=0;i<26;i++)
			count[i]=countb[i]=0;
			for (i=0;i<n/2;i++)
			{
				count[a[i]-97]++;
			}
			for (;i<n;i++)
			countb[a[i]-97]++;
			for (i=0;i<26;i++)
			if (count[i]>countb[i])
			step=step+count[i]-countb[i];
			printf("%d\n",step);
		}
	}
	return 0;
}
