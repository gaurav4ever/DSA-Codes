#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void quicksort(long long int *x,int first,int last);
int main() {

    int t;
    scanf("%d",&t);
    while(t--)
        {
		long long int n,a[100000],count[100000]={0},flag=0,i,j;
            scanf("%lld",&n);
            for(i=0;i<n;i++)
                scanf("%lld",&a[i]);
		quicksort(a,0,n-1);
        for(i=0;i<n-1;i++)
        {
			if(a[i]!=1)
            for(j=i+1;j<n;j++)
                {
                    if(a[j]%a[i]!=0)flag=1;
					else {flag=0;break;}
            	}
        }
	if(flag==1)printf("YES\n");
	else printf("NO\n");
    }
    return 0;
}
void quicksort(long long int *x,int first,int last){
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
