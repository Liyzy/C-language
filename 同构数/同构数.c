#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    int a[99];
    printf("1-99内的同构数为:\n");
    for(i=0; i<99; i++)
    {
        a[i]=i+1;
        if((a[i]*a[i])%10==a[i])
            printf("%-4d",a[i]);
    }
    return 0;
}
