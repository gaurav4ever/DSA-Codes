#include<conio.h>
int main() 
{
   int i,v,n,ar[1000];
    scanf("%d",&v);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
  for(i=0;i<n;i++)
    {
        if(v==ar[i])printf("%d",i);
    }
    return 0;
}
