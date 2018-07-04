#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,temp;//a为分母；b为分子。
    float a=1,b=2,
    sum=0;
    printf("2/1+3/2+5/3+...前20项和：\n");
    for(i=1;i<=3;i++)
    {
        sum+=b/a;
        temp=a;
        a=b;
        b=a+temp;
    }
    printf("%f",sum);
    return 0;
}
