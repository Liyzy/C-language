#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int i,x;
    double temp=1;
    double sum=1;
    printf("������һ������:");
    scanf("%d",&x);
    for(i=1;pow(x,i)/temp>1e-6;)
    {
       sum+=pow(x,i)/temp;
       i++;
       temp*=i;
    }
    printf("e��x�η��Ľ���ֵΪ:%lf",sum);
    return 0;
}
