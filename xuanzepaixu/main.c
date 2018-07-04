#include<stdio.h>
int main()
{
    int i,j,min,temp;
    int a[10];
    printf("ÇëÊäÈë10¸öÊı×Ö:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<9;i++)
    {
        min=i;
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
                {
                   min=j;
                   temp=a[min];
                   a[min]=a[i];
                   a[i]=temp;
                }
        }

    }
     for(i=0;i<10;i++)
        printf("%-4d",a[i]);
    return 0;
}
