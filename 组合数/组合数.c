#include<stdio.h>
int main()
{
    int m,n,q=0;
    scanf("%d%d",&n,&m);
    while(n<m)
    {
        printf("Wrong!");
        scanf("%d%d",&n,&m);
    }
    int C(int n,int m);
    printf("%d",C(n,m));
    return 0;
}
int C(int n,int m)
{
    int total=0;
    int p(int n);
    total=p(n)/(p(m)*p(n-m));
    return total;
}
int p(int n)
{
    int all=0;
    if(n>1)
        all=n*p(n-1);
    else
        all=1;
    return all;
}
