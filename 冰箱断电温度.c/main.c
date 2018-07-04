#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float t,T;
    printf("请输入小时和分钟:\n");
    scanf("%d%d",&a,&b);
    t=a+b/60.0;
    T=4*t*t/(t+2)-20;
    printf("断电%f小时后冰箱温度为:%.2f",t,T);
    return 0;
}
