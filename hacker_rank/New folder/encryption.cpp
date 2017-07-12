#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    char str[82]={0};
	int i,j,count=0,ff,cf,k=0;
	scanf("%s",str);
	count=strlen(str);
	ff=sqrt(count);
	if(ff*ff==count)cf=ff;
	else
	{
		cf=ff+1;
		if(ff*cf<count)
		{
			ff=ff+1;
		}
	}
	for(i=0;i<cf;i++)
	{
		for(j=0;j<ff;j++)
            {
            if(i+j*cf<count){
                printf("%c",str[i+j*cf]);
            }
        }printf(" ");
	}
    return 0;
}

