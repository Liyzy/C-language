#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10];
    int *pi;
    int i;
    for(i=0; i<10; i++)
        scanf("%d",&a[i]);
    printf("\n");
    for(i=9; i>=0; i--)
    {
        pi=&a[i];
        printf("%d\t",*pi);
    }

}
