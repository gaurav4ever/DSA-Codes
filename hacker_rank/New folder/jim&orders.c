#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void quicksort(int *x,int first,int last);
int main() 
{
	int n,i,j,a[1000],b[1000],min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int t,d;
		scanf("%d%d",&t,&d);
		a[i]=t+d;
	}	
	for(i=0;i<n;i++)b[i]=a[i];
	quicksort(b,0,n-1);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
				if(b[i]==a[j])printf("%d ",j+1);
				if(b[i]==b[i+1])i++;
		}
	}
   return 0;
}
void quicksort(int *x,int first,int last){
    int j,i;
    int pivot,temp;

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
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}
