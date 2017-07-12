#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[100000],temp;
    int i,j,T,count;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%s",str);
        temp='\0';
        j=-1;
        count=0;
        while(str[++j]!='\0')
            if(temp==str[j])
                count++;
            else
                temp=str[j];
        printf("%d\n",count);
    }  
    return 0;
}

