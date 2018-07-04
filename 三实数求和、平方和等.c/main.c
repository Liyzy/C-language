#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    double a,b,c,q,w,e,r;
    printf("请输入三个实数:");
    scanf("%lf%lf%lf",&a,&b,&c);
    q=a+b+c;
    w=q/3;
    e=a*a+b*b+c*c;
    r=sqrt(e);
    printf("三数的和、和的平均数、平方和、平方和的开方分别为:%lf,%lf,%lf,%lf",q,w,e,r);
    return 0;
}
