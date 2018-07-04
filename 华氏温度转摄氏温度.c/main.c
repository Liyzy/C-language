#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f,c,k;
    printf("请输入华氏温度:");
    scanf("%f",&f);
    c=(f-32)*5/9;
    k=273.16+c;
    printf("摄氏温度和绝对温度分别为:c=%f\n k=%f\n",c,k);
    return 0;
}


