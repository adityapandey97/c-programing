#include <stdio.h>
void main(){
    int i, j,r,c;
    printf("enter the num");
    scanf("%d%d",&r,&c);
    int abc[r][c];
    int t[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d",&abc[i][j]);
        }
        
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            t[j][i]=abc[i][j];
        }
    }
     for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }
    
}
