#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,m,i,j,sum=0;
    printf("请输入一个整数:");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
      for(a=1,j=1;j<=i;j++)
            a*=j;
      sum+=a;
    }
    printf("%d的阶乘和为:%d",m,sum);
    return 0;
}
