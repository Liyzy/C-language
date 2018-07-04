#include<stdio.h>
char * strcat(char*pc1,char*pc2)
{
    int i,j;
    for(i=0;*(pc1+i)!='\0';i++)
        j=i+1;
    for(i=0;*(pc2+i)!='\0';i++,j++)
        *(pc1+j)=*(pc2+i);
    puts(pc1);
}

int main()
{
   char pc1[100]={'\0'},pc2[50]={'\0'};
   scanf("%s",pc1);
   scanf("%s",pc2);
   strcat(pc1,pc2);
}
