#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void quicksort(long long int *x,long long int first,long long int last);
int main()
{
   long long int i,j,n,k,g,x=0,result=0,c[102],sum=0;
   scanf("%lld %lld",&n,&k);g=0;
    
   for(i=0; i<n; i++){
      scanf("%lld", &(c[i]));
   }
   quicksort(c,0,n-1);
		if(n==k)
			for(i=0;i<k;i++)
				result+=c[k-1-i];
		else if(k<n)
		{
			for(i=1;i<=k;i++)
			{
				result+=c[n-i];
				x=1;
			}
			for(i=n-1-k;i>=0;i=i-k)
			{
                 for(j=0;j<k;j++)
                {
                      if((i-j)>=0)
                sum+=c[i-j];
            }
				result+=(x+1)*sum;
				x++;sum=0;
			}
		}
   printf("%lld\n", result);
}
void quicksort(long long int *x,long long int first,long long int last){
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

