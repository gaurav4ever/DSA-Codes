#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void quicksort(int *x,int first,int last);
int main() 
{
	int n,i,j,min=0,temp=0,a[100000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>0)min=a[i];
	}
	quicksort(a,0,n-1);
	a[n]=0;
	for(i=0;i<n-1;i++)
	{	
		if(a[i+1]-a[i]<=min && a[i+1]-a[i]>0)min=a[i+1]-a[i];
	}
for(i=0;i<n;i++)
	{	
		if(a[i+1]-a[i]==min)printf("%d %d ",a[i],a[i+1]);
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

