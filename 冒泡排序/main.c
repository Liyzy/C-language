#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    int i,j,temp;
    int a[100];
    srand(time(0));
    for(i=0;i<100;i++)
       a[i]=rand()%100+1;
    for(i=0;i<100;i++)
        printf("%d\t",a[i]);
        printf("\n\n");
    for(i=0;i<99;i++)
        for(j=0;j<99-i;j++)
    {
        if(a[j]>a[j+1])
          {
           temp=a[j];
           a[j]=a[j+1];
           a[j+1]=temp;
          }

    }
    for(i=0;i<100;i++)
        printf("%d\t",a[i]);
    return 0;
}
