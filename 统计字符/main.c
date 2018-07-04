#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number[4]={0};
    char c[10];
    int i;
    for(i=0;i<10;i++)
    scanf("%c",&c[i]);
    for(i=0;i<10;i++)
    {
        if(c[i]==32)number[0]++;
        if(c[i]>='a'&&c[i]<='z')number[1]++;
        if(c[i]>='A'&&c[i]<='Z')number[1]++;
        if(c[i]>='0'&&c[i]<='9')number[2]++;

    }
    number[3]=10-number[0]-number[1]-number[2];
    printf("空格数、字母数、数字数、其他字符数分别为:");
    for(i=0;i<4;i++)
    printf("%4d",number[i]);
    return 0;
}
