#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    while(n--)
    {
        char str[10000];
        int i,len1=0,len2=0,len3=0,len;
        scanf(" %[^\t\n]s",str);
        len=strlen(str);
		for(i=0;i<len;i++)
		{	
			if(str[i]==45){len1=i;i=len;}
			else if(str[i]==32){len1=i;i=len;}
		}
		for(i=len1;i<len;i++)
		{
			if(str[i]==45)len2=i;
			else if(str[i]==32){len2=i;}
		}
        printf("CountryCode=");
        for(i=0;i<len1;i++)printf("%c",str[i]);
        printf(",LocalAreaCode=");
        for(i=len1+1;i<len2;i++)printf("%c",str[i]);
        printf(",Number=");    
        for(i=len2+1;i<len;i++)printf("%c",str[i]);printf("\n");
    }
    return 0;
}


