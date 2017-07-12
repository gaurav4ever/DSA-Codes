#include <stdio.h>
#include <string.h>
#include <math.h>
void displayPathtoPrincess(int n, char grid[101][101])
{
    int k,g,i,j,pi=0,pj=0,mi,mj;
    mi=n/2;mj=n/2;
    for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
            {
            if(grid[i][j]=='p'){pi=i;pj=j;}
        }
    }
    int ansi=0,ansj=0;
    ansi=pi-mi;
    ansj=pj-mj;
    if(ansj>0)
		for(k=0;k<ansj;k++)
            printf("RIGHT\n");
    else 
		for(g=ansj;g<0;g++)
            printf("LEFT\n");
    
    if(ansi>0)
		for(k=0;k<ansi;k++)
            printf("DOWN\n");
    else
		for(g=ansi;g<0;g++) 
            printf("UP\n");
}
int main(void) {

    int m;
    scanf("%d", &m);
    char grid[101][101]={};
    char line[101];

    for(int i=0; i<m; i++) {
        scanf("%s", line);
        strcpy(grid[i], line);
    }
    displayPathtoPrincess(m,grid);
    return 0;
}

