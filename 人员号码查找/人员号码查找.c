#include<stdio.h>
#include<string.h>
struct person
{
    char name[50];
    char phonenumber[20];
};
struct person p[3]= {'\0'};
struct person b[3]= {'\0'};
int main ()
{
    int i,j=0;
    char search[50]= {'\0'};
    for(i=0; i<3; i++)
    {
        gets(p[i].name);
        gets(p[i].phonenumber);
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<50; j++)
        {
            if(p[i].name[j]=='#')
                break;
            printf("%c",p[i].name[j]);
            b[i].name[j]=p[i].name[j];
        }
        puts(p[i].phonenumber);
        printf("\n");
    }
    gets(search);
    for(i=0; i<3; i++)
    {
        if(!strcmp(b[i].name,search))
            printf("%s",p[i].phonenumber);
    }
}
