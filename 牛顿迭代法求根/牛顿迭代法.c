#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d;
    printf("a,b,c,d :\n");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    float sol(float a,float b,float c,float d);
    printf("The solution is %f",sol(a,b,c,d));
    return 0;
}
float sol(float a,float b,float c,float d)
{
    float x0,f,f1,x=1;
    do
    {
        x0=x;
        f=a*x0*x0*x0+b*x0*x0+c*x0+d;
        f1=3*a*x0*x0+2*b*x0+c;
        x=x0-f/f1;
    }
    while(fabs(x-x0)>=1e-5);
    return x;
}
