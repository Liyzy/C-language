#include<stdio.h>
int main()
{
    int year,month,day;
    printf("Input year,month and day:\n");
    scanf("%d%d%d",&year,&month,&day);
    int f(int year,int month,int day);
    printf("%d",f(year,month,day));
    return 0;
}
int f(int year,int month,int day)
{
    int i,d;
    int a[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
    int b[12]= {31,29,31,30,31,30,31,31,30,31,30,31};
    if(year%4==0&&year%100!=0||year%400==0)
    {
        d=day;
        for(i=1; i<month; i++)
            d+=b[i-1];
    }
    else
    {
        d=day;
        for(i=1; i<month; i++)
            d+=a[i-1];
    }
    return d;
}
