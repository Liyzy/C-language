#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int i,x;
    double temp=1;
    double sum=1;
    printf("请输入一个整数:");
    scanf("%d",&x);
    for(i=1;pow(x,i)/temp>1e-6;)
    {
       sum+=pow(x,i)/temp;
       i++;
       temp*=i;
    }
    printf("e的x次方的近似值为:%lf",sum);
    return 0;
}
