#include <stdio.h>
int main()
{
    int a,b,m1,m2,m3,n1,n2,n3,i,q,w,e;
    float k,y;
    printf("������������Ϊ������\n��ʼ��̣�(����)\n");
    scanf("%d",&a);
    printf("��ʼʱ��:(ʱ���֣���)\n");
    scanf("%d%d%d",&m1,&m2,&m3);
    printf("�������:(����)\n");
    scanf("%d",&b);
    printf("����ʱ�䣻(ʱ���֣���)\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    i=b-a;
    q=n1-m1;
    w=n2-m2;
    e=n3-m3;
    k=q+w/60.0+e/3600.0;
    y=i/k;
    printf("�����Ϊ:%d����\n��ʱ��Ϊ��%fСʱ\nƽ���ٶ�Ϊ��%f����/Сʱ",i,k,y);

    return 0;
}
