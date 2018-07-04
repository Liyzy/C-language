#include<stdio.h>
float sum(float (*p)[3])
{
    int i;
    float sum=0;
    for(i=0; i<3; i++)//1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
        sum+=*(*p+i);
    return sum;
}
int main()
{
    int i,j;
    float a[10][3];
    for(i=0; i<10; i++)
        for(j=0; j<3; j++)
            scanf("%f",&a[i][j]);
    for(i=0; i<10; i++)
    {
        for(j=0; j<3; j++)
            printf("%f\t",a[i][j]);
        printf("\n");
    }
    printf("\n");
     for(j=0; j<10; j++)
    printf("%f\n",sum(a+j));
}
