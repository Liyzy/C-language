#include <stdio.h>
#include <stdlib.h>

void turn(int row,int col,int a[row][col])
{
    int i,j;
    int b[2][3];
    for(i=0; i<row; i++)
        for(j=0; j<col; j++)
            b[j][i]= a[i][j];
    for(i=0; i<col; i++)
       {
         for(j=0; j<row; j++)
            printf("%d\t",b[i][j]);
            printf("\n");
       }
}

int main()
{
    int i,j;
    int row,col;
    int a[3][2];
    scanf("%d%d",&row,&col);
    for(i=0; i<row; i++)
        for(j=0; j<col; j++)
            scanf("%d",&a[i][j]);
    turn(row,col,a);
    return 0;
}
