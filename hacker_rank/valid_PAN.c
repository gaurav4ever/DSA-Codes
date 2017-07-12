#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n;
        scanf("%d",&n);
        while(n--)
        {
            char pan[10];
            int i,flag=0,a[10]={0};
            scanf("%s",pan);
            for(i=0;i<=4;i++)
            {     
						if(pan[i]>=64&&pan[i]<=91)a[i]=1;
            }
			for(i=5;i<=8;i++)
            {
                       if(pan[i]>47&&pan[i]<58)a[i]=1;
            }
           if(i==9)
			{
				if(pan[i]>=64&&pan[i]<=91)a[i]=1;
			}    
            
			for(i=0;i<10;i++)
			{
				if(a[i]==1)flag=1;
				else {flag=0;break;}
			}
		if(flag==1)printf("YES\n");
		else printf("NO\n");flag=0;
        }
        return 0;
}
