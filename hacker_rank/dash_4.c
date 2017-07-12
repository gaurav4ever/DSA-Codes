#include<conio.h>
#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
while(n--)
{
	int t,k=1,i,j,b,m=0,a[50][50];
scanf("%d",&b);
n=b;
for(i=0;i<n;i++,n--,m++)
{
	for(j=m;j<n;j++)
	{a[j][i]=k;k++;}
	for(j=m+1;j<n;j++)
	{a[(n-1)][j]=k;k++;}
	for(j=n-2;j>=m;j--)
	{a[j][(n-1)]=k;k++;}
	for(j=n-2;j>m;j--)
	{a[m][j]=k;k++;}
}
for(i=0;i<b;i++)
    {
        printf("\n");
        for(j=0;j<b;j++)
        {
            printf("%d ",a[i][j]);
        }
    }
}
getch();
}

