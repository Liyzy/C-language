#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,temp;
    printf("��������������:\n");
    scanf("%d%d",&m,&n);
    for(;n!=0;)
    {
       temp=n;
       n=m%n;
       m=temp;
    }
    printf("���Լ��Ϊ��%d",m);
    return 0;
}
