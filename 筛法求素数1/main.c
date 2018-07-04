#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int i,j,a[100];
     for(i=0;i<100;i++)
     a[i]=i+1;
    for(i=2;i<100;i++)
      for(j=2;j<10;j++)
        if(a[i]%j==0&&a[i]/j!=1)
           a[i]=0;
    for(i=1;i<100;i++)
       if(a[i]!=0)
     printf("%4d\t",a[i]);

    return 0;
}
