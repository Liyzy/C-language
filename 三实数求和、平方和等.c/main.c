#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    double a,b,c,q,w,e,r;
    printf("����������ʵ��:");
    scanf("%lf%lf%lf",&a,&b,&c);
    q=a+b+c;
    w=q/3;
    e=a*a+b*b+c*c;
    r=sqrt(e);
    printf("�����ĺ͡��͵�ƽ������ƽ���͡�ƽ���͵Ŀ����ֱ�Ϊ:%lf,%lf,%lf,%lf",q,w,e,r);
    return 0;
}
