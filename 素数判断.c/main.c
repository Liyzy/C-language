#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int a,i,m,flag=1;
    printf("Please input a number:\n");
    scanf("%d",&a);
    m=sqrt(a);
    for(i=2;i<m&&flag;i++)
    {
        if(a%i==0)
            flag=0;
    }
    if(flag)
        printf("%d is a prime.\n",a);
    else
        printf("%d isn't a prime.\n",a);
    return 0;
}
