#include <stdio.h>
#include <stdlib.h>

void isperfectnum(int number)
{
    int i,sum=0;
        for(i=1;i<number;i++)
           {
             if(number%i==0)
                sum+=i;
           }
    if(sum==number)
    printf("%d\t",number);
}

int main()
{
    int i;
  for(i=1;i<1000;i++)
   {
     isperfectnum(i);
   }
    return 0;
}
