#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10];
    int i,j;
    for(i=0; i<10; i++)
        a[i][0]=1;
    for(i=1; i<10; i++)
        a[i][i]=1;
    for(i=1; i<9; i++)
        for(j=0; j<i; j++)
            a[i+1][j+1]=a[i][j]+a[i][j+1];
    printf("========\\ yanghuisanjiao //========\n");
    for(i=0; i<10; i++)
    {
        for(j=0; j<i+1; j++)
            printf("%4d",a[i][j]);
        printf("\n");
    }
    return 0;
}
