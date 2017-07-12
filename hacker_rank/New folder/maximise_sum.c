#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void sort(long long int x[],long long int first,long long int last){
    long long int pivot,j,temp,i;
     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         sort(x,first,j-1);
         sort(x,j+1,last);

    }
}
int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	long long int n,m,i,j,a[100000],max=0,sum=0;
	scanf("%lld %lld",&n,&m);
	for(i=0;i<n;i++)scanf("%lld",&a[i]);
	sort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		if(max<m)
		{
			sum+=a[i];max=sum;
		}
	}
	printf("%lld\n",sum);
	}    
    return 0;
}

