#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,temp;
    printf("请输入两个数字:\n");
    scanf("%d%d",&m,&n);
    for(;n!=0;)
    {
       temp=n;
       n=m%n;
       m=temp;
    }
    printf("最大公约数为：%d",m);
    return 0;
}
