#include <stdio.h>
#include <stdlib.h>
void f(int n,char x,char y,char z)
{
    if(n==1)
        printf("%d:%c--%c\t",n,x,z);
    else
    {
        f(n-1,x,z,y);
        printf("%d:%c--%c\t",n,x,z);
        f(n-1,y,x,z);
    }
}


int main()
{
    f(20,'a','b','c');
    return 0;
}
