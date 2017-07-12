#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{ int a[50];
int i,j,n,temp=0,count=0;
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[j]>a[i])
		{
			temp=a[j-1];
			a[j-1]=a[j];
			a[j]=temp;
count++;
		}
	}
}    
printf("%d",count);           
    getch();
}
