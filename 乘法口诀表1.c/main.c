#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a;
    printf("    ");
    for(i=1;i<10;i++)
        printf("%4d",i);
    printf("\n");
    for(i=1;i<10;i++)
      {
          printf("%4d",i);
          for(j=1;j<10;j++)
            {
              a=i*j;
              printf("%4d",a);
            }
         printf("\n");
      }
      return 0;


}
