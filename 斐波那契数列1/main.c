#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f1=0,f2=1,i,temp;
    printf("=====\\ì³²¨ÄÇÆõÊýÁÐ//=====\n");
    printf("%d\t%d\t",f1,f2);
    for(i=1;i<21;i++)
    {
       temp=f2;
       f2=f1+f2;
       f1=temp;
       printf("%d\t",f2);
       if((i+2)%5==0)
         printf("\n");
    }
    return 0;
}
