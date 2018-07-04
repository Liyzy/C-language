#include <stdio.h>
#include <stdlib.h>
int add(int a[],int n)
{
    int sum=0;
    if(n>=1)
          sum=a[n-1]+add(a,n-1);
    return sum;
}
int main()
{
    int a[]= {3,6,4,8,9,3,1,0};
    printf("%d",add(a,8));
    return 0;
}
