#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,sum=1;
    printf("请输入一个整数:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
      sum*=i;
    }
    printf("%d的阶乘为:%d",a,sum);
    return 0;
}
