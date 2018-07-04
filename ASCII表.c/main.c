#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,m,c;
    printf("    ");
    for(i=1;i<10;i++)
        printf("%4d",i);
    printf("\n");
    for(i=3;i<13;i++)
    {
      m=i*10;
      printf("%4d",m);
      for(j=1;j<10;j++)
      {
        c=m+j;
        printf("%4c",c) ;
      }
      printf("\n");
    }
    return 0;
}
