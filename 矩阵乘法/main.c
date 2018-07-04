#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}},b[4][2]={{1,2},{3,4},{5,6},{7,8}};
    int c[3][2]={0};
    int i,j,k;
    for(i=0;i<3;i++)
        for(j=0;j<2;j++)
            for(k=0; k<4; k++)
                c[i][j]+=a[i][k]*b[k][j];
    for(i=0; i<3; i++)
    {
        for(j=0; j<2; j++)
            printf("%d\t",c[i][j]);
        printf("\n");
    }
    return 0;
}
