#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,sum=1;
    printf("������һ������:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
      sum*=i;
    }
    printf("%d�Ľ׳�Ϊ:%d",a,sum);
    return 0;
}
