#include <stdio.h>
#include <stdlib.h>
#define m 1000

int main()
{
    int n,q,r;
    float i,w;
    printf("������������ʺ�����̨����\n");
    scanf("%f%d",&i,&q);
    n=m*q;
    w=i+n;
    r=q*10800;
    if(r>100000)
    printf("�ܹ���Ϊ��%f",w+r*2/100);

        else
          printf("�ܹ���Ϊ��%f",w);
    return 0;
}
