#include<stdio.h>
void strcompare(char *p1,char *p2)
{
    int i;
    char *pp1,*pp2;
    pp1=p1;
    pp2=p2;
    for(i=0; *p1++!='\0'&&*p2++!='\0'; i++)
    {
        if(*p1-*p2>0)
        {
            printf("the longer string is:\n%s",pp1);
            break;
        }
        if(*p1-*p2<0)
        {
            printf("the longer string is:\n%s",pp2);
            break;
        }
        if(*p1-*p2==0)
            continue;
    }
}
int main()
{
    char p1[20],p2[20];
    printf("Please input two strings:\n");
    scanf("%s",p1);
    scanf("%s",p2);
    strcompare(p1,p2);
}
