#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float t,T;
    printf("������Сʱ�ͷ���:\n");
    scanf("%d%d",&a,&b);
    t=a+b/60.0;
    T=4*t*t/(t+2)-20;
    printf("�ϵ�%fСʱ������¶�Ϊ:%.2f",t,T);
    return 0;
}
