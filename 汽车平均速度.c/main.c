#include <stdio.h>
int main()
{
    int a,b,m1,m2,m3,n1,n2,n3,i,q,w,e;
    float k,y;
    printf("所有输入数据为整数。\n开始里程；(公里)\n");
    scanf("%d",&a);
    printf("开始时间:(时，分，秒)\n");
    scanf("%d%d%d",&m1,&m2,&m3);
    printf("结束里程:(公里)\n");
    scanf("%d",&b);
    printf("结束时间；(时，分，秒)\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    i=b-a;
    q=n1-m1;
    w=n2-m2;
    e=n3-m3;
    k=q+w/60.0+e/3600.0;
    y=i/k;
    printf("总里程为:%d公里\n总时间为：%f小时\n平均速度为：%f公里/小时",i,k,y);

    return 0;
}
