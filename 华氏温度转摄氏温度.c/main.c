#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f,c,k;
    printf("�����뻪���¶�:");
    scanf("%f",&f);
    c=(f-32)*5/9;
    k=273.16+c;
    printf("�����¶Ⱥ;����¶ȷֱ�Ϊ:c=%f\n k=%f\n",c,k);
    return 0;
}


