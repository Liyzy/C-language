#include<stdio.h>
#include<string.h>
char*replace(char*pc1,char*pc2,char*pc3)
{
    char *p,*pp;
    p=pc1;
    for(; *p!='\0';)
    {
        if(p!=strstr(pc1,pc2))//adladiadhaduadiadiadladoadvadeadyadoadu
            printf("%c",*p++);
        else
        {
           printf("%s",pc3);
            pc1=p+strlen(pc2);
            p+=strlen(pc2);
        }
    }
}
int main()
{
    char pc1[100],pc2[100],pc3[100];
    printf("Please input a string:\n");
    scanf("%s",pc1);
    printf("Please input the string you want to search:\n");
    scanf("%s",pc2);
    printf("Please input the string you want to replace:\n");
    scanf("%s",pc3);
    replace(pc1,pc2,pc3);
}
