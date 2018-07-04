#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int i;
    double temp=1,sum=0;
    for(i=1;fabs(1/temp)>1e-6;)
    {
       sum+=1/temp;
       i++;
      temp=2*i-1;
       if(i%2==0)
       temp=-temp;
    }
    printf("PI的近似值为:%lf",4*sum);
    return 0;
}
