#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=1,i;
    printf("���ӵ�һ��ժ����Ϊ��\n");
    for(i=1;i<11;i++)
    {
      sum=(sum+1)*2;
    }
    printf("%d",sum);
    return 0;
}
