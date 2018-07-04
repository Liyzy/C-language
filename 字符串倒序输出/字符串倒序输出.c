#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{
    int i=0;
    char *p[100]={0};
    printf("Press # to end\n");
    p[0]=(char *)malloc(10*sizeof(char));
    scanf("%s",p[0]);
    while(*p[i]!='#')
    {
        i++;
        p[i]=malloc(10*sizeof(char));
        scanf("%s",p[i]);
    }
    for(i-=1; i>=0; i--)
        if(p)
            printf("%s ",p[i]);
}
