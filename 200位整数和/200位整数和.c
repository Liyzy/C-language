#include<stdio.h>
#include<string.h>
int main()
{
    char a1[200]={0},a2[200]={0},a3[201]={0};
    int i,len1,len2;
    printf("Input two numbers:\n");
    scanf("%s",a1);
    scanf("%s",a2);
    len1=strlen(a1);len2=strlen(a2);
    for(i=(len1>len2?len1:len2); i>=0; i--)
    {
        if(a1[i]+a2[i]<10)
            a3[i]=a1[i]+a2[i]-48;
        else
        {
            a3[i]=a1[i]+a2[i]-58;
            a1[i-1]+=1;
        }
    }
    for(i=0;i<strlen(a3);i++)
    printf("%c",a3[i]);
}
