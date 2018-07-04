#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("请输入三个小数:");
    scanf("%f%f%f",&a,&b,&c);
    if(a>b&&a>c)
    {
        if(b>c)
        {
            printf("max=%f\nmin=%f",a,c);
        }
        else
        {
            printf("max=%f\nmin=%f",a,b);
        }
    }
    else if(b>a&&b>c)
    {
        if(a>c)
        {
            printf("max=%f\nmin=%f",b,c);
        }
        else
        {
            printf("max=%f\nmin=%f",b,a);
        }
    }
    else
    {
        if(a>b)
        {
            printf("max=%f\nmin=%f",c,b);
        }
        else
        {
            printf("max=%f\nmin=%f",c,a);
        }
    }
    return 0;
}
