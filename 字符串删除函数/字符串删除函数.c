#include<stdio.h>
#include<string.h>
void del(char *pc1,char *pc2)
{
    char *p;
    p=pc1;
    for(; *p!='\0';)
    {
        if(p!=strstr(pc1,pc2))//adladiadhaduadiadiadladoadvadeadyadoadu
            printf("%c",*p++);
        else
        {
            pc1=p+strlen(pc2);
            p+=strlen(pc2);
        }
    }
}
int main()
{
    char pc1[100],pc2[100];
    printf("Please input a string:\n");
    scanf("%s",pc1);
    printf("Please input the string you want to delete:\n");
    scanf("%s",pc2);
    del(pc1,pc2);
}
