#include<stdio.h>
float a[5][4]= {43,54,67,83,76,36,22,45,90,87,65,47,34,28,65,98,65,54,76,67};
int main()
{
    int i,j,n,m;
    for(i=0; i<5; i++)
    {
        for(j=0; j<4; j++)
            printf("%3.1f\t",a[i][j]);
        printf("\n");
    }
    for(i=0; i<5; i++)
        {   n=0;
            for(j=0; j<4; j++)
               if(a[i][j]<60)
                  n++;
            printf("bumen=%d\t",n);
        }
        printf("\n");
    for(i=0; i<4; i++)
       {  m=0;
         for(j=0; j<5; j++)
           if(a[j][i]<60)m++;
          printf("bugelv=%f\t",(5-m)/5.0);
       }
}
