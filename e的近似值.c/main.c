#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1;
    long temp=1;
    double sum=1.0;
    for(;temp<1e-6;)
    {
        sum+=1.0/temp;
        i=i+1;
        temp*=i;
    }
    printf("e的近似值为:%lf",sum);
    return 0;
}
