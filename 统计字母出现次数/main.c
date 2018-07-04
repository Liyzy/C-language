#include <stdio.h>
#include <stdlib.h>
#define n 30

int main()
{
    char cA[n];
    int number[26]={0};
    int i;
    printf("INPUT 30 NUMBER AT MOST:\n");
    for(i=0;i<n;i++)
        scanf("%c",&cA[i]);
    for(i=0;i<n;i++)
    {
        if(cA[i]>='A'&&cA[i]<='Z')
            number[cA[i]-'A']++;
        if(cA[i]>='a'&&cA[i]<='z')
            number[cA[i]-'a']++;
    }
    for(i=0;i<26;i++)
        printf("%c:%d\n",'A'+i,number[i]);
    return 0;
}
