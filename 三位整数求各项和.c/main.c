#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,q,w,r,t,e;
    printf("������һ����λ����:");
    scanf("%d",&a);
    q=a%10;
    w=a%100;
    r=w/10;
    e=a/100;
    t=q+e+r;
    printf("���Ϊ:%d",t);
    return 0;
}
