
#define PI 3.1415926
#include<stdio.h>
int main()
{
    float C,S,V,r,h;
    printf("������Բ���ĵ���ֱ���͸ߣ�");
    scanf("%f%f",&r,&h);
    C=PI*r;
    S=h*C+PI*(r/2)*r;
    V=S*h;
    printf("Բ����ĵ����ܳ��������������ֱ�Ϊ:%f\n%f\n%f\n",C,S,V);
    return 0;
}
