#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t,px,py,qx,qy;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d",&px,&py,&qx,&qy);
        printf("%d %d\n",qx+qx-px,qy+qy-py);
    }
    return 0;
}

