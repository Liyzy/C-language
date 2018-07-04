 #include<stdio.h>
#include<math.h>
int main()
{
    int a,n;
    scanf("%d%d",&a,&n);
    double sum(int a,int n);
    printf("%f",sum(a,n));
    return 0;
}


double sum(int a,int n)
{
    int i,j;
    double s=0;
    double b[9]={0};
    for(i=0; i<n; i++)
        for(j=i; j>=0; j--)
            b[i]+=a*pow(10,j);
    for(i=0; i<9; i++)
        s+=b[i];
    return s;
}

