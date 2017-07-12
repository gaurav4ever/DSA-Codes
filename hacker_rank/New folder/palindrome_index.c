#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int t;
	scanf("%d",&t);
    while(t--)
        {
        char s[100005],a[100005];
        int t,i,j,len,flag=0,k=0,g;
		scanf("%s",s);
        len=strlen(s);
        for(i=0;i<len/2;i++)
            {
                if(s[i]==s[len-1-i])flag=1;
			     else 
					{
					flag=0;
					break;
					}
	        }
        if(flag==1)printf("-1\n");
		else
		{
			for(j=0;j<len;j++,k++)
			{
				if(j==i){j++;}
				a[k]=s[j];
			}
           
			for(j=0;j<(len-1)/2;j++)
            {
                if(a[j]==a[len-2-j])flag=1;
				else {flag=0;break;}
	        }
			if(flag==1)printf("%d\n",i);
                else printf("%d\n",len-1-i);
		}
    }
    return 0;
}

