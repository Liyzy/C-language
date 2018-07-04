#include <stdio.h>
int *min(int array[],int n)
{
    int i;
    int *pi;
    pi=array;
    for(i=0;i<n;i++)
    if(array[i]<*pi)
        pi=&array[i];
    return pi;
}
int main()
{
   int array[]={23,42,47,85,14,27,95};
   printf("oX%x\n%d",min(array,7),*min(array,7));
}
