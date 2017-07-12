#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{	
   	long long int r,c,m=0,n=1,i,j,ans=0;
    scanf("%lld %lld",&r,&c);
	if((r-1)%2==0)
	   {
        ans=(r-1)*5;
           if(c==1)c=0;
            else if(c==2);
                else if(c==3)c=4;
                    else if(c==4)c=6;
                        else if(c==5)c=8;
                ans+=c;
    }
    else 
        {
           ans=(r-2)*5 +1;
        if(c==1)c=0;
            else if(c==2)c=2;
                else if(c==3)c=4;
                    else if(c==4)c=6;
                        else if(c==5)c=8;
        ans+=c;
    }
    printf("%lld",ans);
    return 0;
}
