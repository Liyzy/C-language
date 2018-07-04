#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int sum=0;
    printf("请输入一个1-99999之间的整数:");
    scanf("%d",&n);
    while(n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    printf("各位之和为:%d",sum);
    return 0;
}
