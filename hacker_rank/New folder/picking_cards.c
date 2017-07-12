#include <stdio.h>

int main()
{
  int i,j,k,T,N,sum;
  long long ans;
  scanf("%d",&T);
  while(t--)
    {
      ans=1;
      scanf("%d",&N);
      int b[N];
      sum=0;
      for(j=0;j<=N;j++)
        b[j]=0;
      for(j=0;j<N;j++){
        scanf("%d",&k);
        b[k]++;}
      for(j=0;j<N;j++,sum--)
        {
          sum=sum+b[j];
          ans*=sum;
          ans%=1000000007;
        }
      printf("%lld\n",ans);
    }
  return 0;
}

