#include<stdio.h>
char *strcpy(char *pc1,char *pc2)
{
    int i;
    for(i=0; *(pc1+i)!='\0'; i++)
        *(pc2+i)=*(pc1+i);
    puts(pc2);
}
int main()
{
    char pc1[100],pc2[100]={'\0'};
    gets(pc1);
    strcpy(pc1,pc2);
}
