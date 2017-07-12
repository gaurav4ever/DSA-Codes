#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void sort(long long int x[],int first,int last){
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

main()
{
long long int a[1000],b[1000],i,j,k,flag,n,t; 
scanf("%lld",&t);
while(t--)
{
scanf("%lld%lld",&n,&k);
for(i=0;i<n;++i)
scanf("%lld",&a[i]);
for(i=0;i<n;++i)
scanf("%lld",&b[i]);
sort(a,0,n-1);
sort(b,0,n-1);
flag=1;
for(i=0;i<n;++i)
{
if((a[i]+b[n-1-i])<k)
{
flag=0;
break;
}
}
if(flag==1)
printf("YES\n");
else
printf("NO\n");
}
}
