#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10]= {0};
    int i;
    int hole=0;
    for(i=1; i<=1000; i++)
    {
        a[(hole+i)%10]=1;
        hole=(hole+i)%10;
    }
    if(a[0]==0)printf("10");
    for(i=1; i<10; i++)
    {
        if(a[i]==0)
            printf("%4d",i);
    }
    return 0;
}
