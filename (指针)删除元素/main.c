#include <stdio.h>
int main()
{
    int a[10]= {1,2,3,4,5,6,7,8,9,10};
    int *p[10]= {0};
    int i,k;
    for(i=0; i<10; i++)
        p[i]=&a[i];
    for(i=0; i<10; i++)
        printf("a[%d]=%d\t",i,*p[i]);
    scanf("%d",&k);
    *p[k]=0;
    for(i=0; i<10; i++)
        if(*p[i]!=0)
            printf("a[%d]=%d\t",i,*p[i]);
    return 0;
}
