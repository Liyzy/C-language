#include <stdio.h>
#include <stdlib.h>
void turn(int row,int cot,int a[row][cot])
{
    int *pi;
    int i,j;
    pi=(int *)malloc(4*row*cot+4);
    for(i=0; i<row; i++)
        for(j=0; j<cot; j++)
            pi[j*row+i+1]=a[i][j];
    for(i=0; i<cot; i++)
    {
        for(j=0; j<row; j++)
            printf("%d\t",pi[i*row+j+1]);
        printf("\n");
    }

}
int main()
{

    int a[4][3];
    int row,cot,i,j;
    scanf("%d%d",&row,&cot);
    for(i=0; i<row; i++)
    {
        for(j=0; j<cot; j++)
            scanf("%d",&a[i][j]);
    }
    turn(row,cot,a);
    return 0;
}
