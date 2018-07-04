#include<stdio.h>
int main ()
{
    int i,j,temp;
    int array[10];
    int *p[10];
    for(i=0; i<10; i++)
        p[i]=&array[i];
    printf("请输入10个数字:\n");
    for(i=0; i<10; i++)
        scanf("%d",&array[i]);
    for(i=0; i<10; i++)
        for(j=i+1; j<10; j++)
            if(array[j]==array[i])
                p[j]=0;
    for(i=0;i<9;i++)
      for(j=i+1;j<10;j++)
          if(p[i]!=0&&p[j]!=0&&*p[i]>*p[j])
          {
             temp=*p[i] ;
             *p[i]=*p[j];
             *p[j]=temp;
          }
    printf("调整后的数字为:\n");
    for(i=0; i<10; i++)
    {
        if(p[i])
            printf("%d ",*p[i]);
    }
}
