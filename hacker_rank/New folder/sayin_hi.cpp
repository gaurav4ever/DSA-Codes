#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		char str[20];
		int len,i=0,flag=0;
		 scanf(" %[^\t\n]s",str);len=strlen(str);
        for(i=0;i<len;i++)
            {
			if(str[0]=='h'||str[0]=='H')
				if(str[1]=='i'||str[1]=='I')
					if(str[2]==' ')
						if(str[3]=='d'||str[3]=='D')
                        flag=0;
						else {flag=1;break;}
					else flag=0;
				else flag=0;
			else flag=0;
        }
		if(flag==1)printf("%s\n",str);
	}    
    return 0;
}

