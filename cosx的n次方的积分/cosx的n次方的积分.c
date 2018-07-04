#include<stdio.h>
float pi=3.1415926;
float f(float n)
{
    float sol=1;
    float I0;
    if(!n%2)I0=pi/2;
    else I0=1;
    if(n>1)
        sol*=(n-1)/n*f(n-2);
    else
        sol*=I0;
    return sol;
}
int main()
{
    float n;
    printf("请输入次方数:\n");
    scanf("%f",&n);
    printf("cosx(sinx)的%.1f次方在0--pi/2的定积分为:\n%f\t",n,f(n));
    return 0;
}

