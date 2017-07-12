#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{    
	int n,count=0;
	scanf("%d",&n);	
	while(n--)
	{
		char s[100000];
		int i,len=0;
		scanf("%s",s);	
		len=strlen(s);
		for(i=0;i<len;i++)
		{
			if(s[i]=='h'||s[i]=='H')
				if(s[i+1]=='a'||s[i+1]=='A')
					if(s[i+2]=='c'||s[i+2]=='C')
						if(s[i+3]=='e'||s[i+3]=='E')
							if(s[i+4]=='k'||s[i+4]=='K')
								if(s[i+5]=='e'||s[i+5]=='E')
									if(s[i+6]=='r'||s[i+6]=='R')
										if(s[i+7]=='r'||s[i+7]=='R')
											if(s[i+8]=='a'||s[i+8]=='A')
												if(s[i+9]=='n'||s[i+9]=='N')
													if(s[i+10]=='k'||s[i+10]=='K')
														count++;
		}
	} 
	printf("%d",count);
    return 0;
}

