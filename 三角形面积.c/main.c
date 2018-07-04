#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,S;
    printf("请输入三角形的底和高:");
    scanf("%f%f",&a,&b);
    S=a*b/2;
    printf("三角形的面积为：%f",S);
    return 0;
}
