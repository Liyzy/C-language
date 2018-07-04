#include<stdio.h>
int strlen(char *pc)
{
    int i,len=0;
    for(i=0;*(pc+i)!='\0';i++)
      len++;
    return len;
}
int main()
{
   char pc[50];
   gets(pc);
   printf("The string's length is %d.",strlen(pc));
}
