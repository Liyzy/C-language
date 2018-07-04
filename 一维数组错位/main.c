#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a[10]={1,2,3,4,5,6,7,8,9,10};
  int i,m,k;

  for(i=0;i<=9;i++)
   {
      if(i-1<0){
          printf("%d\n",a[i+9]);
          }
      else
      printf("%d\n",a[i-1]);
   }
  return 0;
}
