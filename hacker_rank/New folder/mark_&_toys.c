#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void quicksort(int *x,int first,int last);
int main() {
     int n, k, i,j,temp=0, count,p[100000],sum=0;
    scanf("%d%d", &n, &k);
    for(i=0;i<n;i++)
		scanf("%d",&p[i]);
	quicksort(p,0,n-1);
		for(i=0;sum<=k;i++)
		{
			sum+=p[i];
		}
		printf("%d\n",i-1);
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
