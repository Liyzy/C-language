
#define PI 3.1415926
#include<stdio.h>
int main()
{
    float C,S,V,r,h;
    printf("请输入圆柱的底面直径和高：");
    scanf("%f%f",&r,&h);
    C=PI*r;
    S=h*C+PI*(r/2)*r;
    V=S*h;
    printf("圆柱体的底面周长，表面积，体积分别为:%f\n%f\n%f\n",C,S,V);
    return 0;
}
