#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int i,j;
    for(i=2;i<=100;i++)
    {
        int flag=1;
        for(j=2;j<i&&flag;j++)
        {
            if(i%j==0)
            flag=0;
        }
        if(flag)
            printf("%d\n",i);
    }
    return 0;
}
