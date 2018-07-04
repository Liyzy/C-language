#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    printf("ÊýÎª£º\n");
    for(i=1; i<5; i++)
        for(j=1; j<5; j++)
            for(k=1; k<5; k++)
                if(i!=j&&j!=k&&i!=k)
                    printf("%d\t",i*100+j*10+k);
    return 0;
}
