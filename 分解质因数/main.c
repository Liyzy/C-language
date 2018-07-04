#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int a,i,m,flag=1;
    printf("Input a number:\n");
    scanf("%d",&a);
    for(i=2; i<sqrt(a); i++)
    {
        if(a%i==0)
            flag=0;
    }
    if(flag)
        printf("该数为素数：\n");
    else
    {

        printf("该数不为素数：\n");
        for(i=2; i<a; i++)
        {
            if(a%i==0)
            {
                printf("%d=%d",a,i);
                m=i;
                a=a/m;
                break;
            }
        }
        for(i=2; i<a; i++)
        {
            if(a%i==0)
            {
                a=a/i;
                printf("*%d",i);
                i=1;
            }

        }
        printf("*%d",a);
    }
    return 0;
}
