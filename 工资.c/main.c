#include <stdio.h>
#include <stdlib.h>
#define m 1000

int main()
{
    int n,q,r;
    float i,w;
    printf("请输入基本工资和销售台数：\n");
    scanf("%f%d",&i,&q);
    n=m*q;
    w=i+n;
    r=q*10800;
    if(r>100000)
    printf("总工资为：%f",w+r*2/100);

        else
          printf("总工资为：%f",w);
    return 0;
}
