#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f1=0,f2=1;
    int i,temp;
    printf("=====\\ì³²¨ÄÇÆõÊıÁĞ//=====\n");
    printf("%d\t%d\t",f1,f2);
    for(i=2;i<21;i++)
    {
        f1+=f2;
        f2+=f1;
        printf("%d\t%d\t",f1,f2);
        if(i%3==0)
            printf("\n");
    }
    return 0;
}
