#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i,j;
    for(i=2;i<=1000;i++)
    {
        int flag=1;
        for(j=2;j<i&&flag;j++)
        {
            if(i%j==0)
                flag=0;
        }
        if(flag)
            printf("%d\t",i);
    }
    return 0;
}
