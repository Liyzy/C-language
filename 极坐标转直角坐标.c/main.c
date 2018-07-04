#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define pi 3.14

int main()
{
    double r,x,y,b;
    printf("请分别输入极坐标的横纵坐标:");
    while(~scanf("%lf %lf",&r,&b))
    {
    x=r*cos(b/180*pi);
    y=r*sin(b/180*pi);
    printf("直角坐标的横纵坐标分别为:x=%lf y=%lf",x,y);
    }
    return 0;
}
