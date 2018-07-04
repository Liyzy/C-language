#include <stdio.h>
#include <stdlib.h>

int main()
{
    double i;
    double all=1;
    for(i=1;1/(4*i*i-1)>1e-6;i++)
       all*=4*i*i/(4*i*i-1);
    printf("pi的近似值为：%lf",2*all);
    return 0;
}

