#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    char q,w,e,r;
    printf("������һ��3λ����:");
    scanf("%d",&a);
    q=a/100;
    w=a/10;
    e=w%10;
    r=a%10;
    printf("��������Ϊ:%c%c%c",r+48,e+48,q+48);
    return 0;
}
