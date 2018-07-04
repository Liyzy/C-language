#include <stdio.h>
#include <stdlib.h>

int main()
{
    float  a,b,c,max,min;
    printf("请输入三个小数:");
    scanf("%f%f%f",&a,&b,&c);
    if(a>b)
    {max=a;
    min=b;}
    else
       {max=b;
        min=a;}
    if(max>c)
        printf("max=%f\n",max);
    else
        printf("max=%f\n",c);
    if(min>c)
        printf("min=%f\n",c);
    else
         printf("min=%f\n",min);



    return 0;
}
