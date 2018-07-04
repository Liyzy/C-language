#include <stdio.h>
void turn(int a)
{
    if(a>1)turn(a/2);
    printf("%d",a%2);
}
int main()
{
    int num;
    printf("Input a number:\n");
    scanf("%d",&num);
    turn(num);
    return 0;
}
