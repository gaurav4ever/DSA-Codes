#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
int t,len,ans,i;
char s[20000];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",&s);
        len=strlen(s);
        for(ans=i=0;i<len-1-i;i++)
            ans+=abs(s[i]-s[len-1-i]);
        printf("%d\n",ans);
    }
    return 0;
}
