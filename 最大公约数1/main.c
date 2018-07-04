#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,min,max,i;
    printf("请输入两个数字：\n");
    scanf("%d%d",&a,&b);
    if(a>b)
        min=b;
    else
        min=a;
    for(i=2;i<=min;i++)
        if(a%i==0&&b%i==0)
           max=i;
    printf("最大公约数为:%d\n",max);
    return 0;
}
