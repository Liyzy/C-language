#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define pi 3.14

int main()
{
    double r,x,y,b;
    printf("��ֱ����뼫����ĺ�������:");
    while(~scanf("%lf %lf",&r,&b))
    {
    x=r*cos(b/180*pi);
    y=r*sin(b/180*pi);
    printf("ֱ������ĺ�������ֱ�Ϊ:x=%lf y=%lf",x,y);
    }
    return 0;
}
