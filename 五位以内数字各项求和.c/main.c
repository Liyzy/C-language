#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int sum=0;
    printf("������һ��1-99999֮�������:");
    scanf("%d",&n);
    while(n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    printf("��λ֮��Ϊ:%d",sum);
    return 0;
}
