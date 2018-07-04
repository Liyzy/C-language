#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,memory,max;
    char *p1,*p2;
    char c1[50]= {'\0'},c2[50]= {'\0'},c3[50]= {'\0'},maxlen[50]= {'\0'};
    p1=c3;
    p2=maxlen;
    scanf("%s",c1);
    scanf("%s",c2);
    for(i=0; c1[i]!='\0'; i++)
    {
        max=strlen(c3);
        for(j=0; c2[j]!='\0'; j++)
            if(c1[i]==c2[j])
            {
                k=0;
                memory=i;
                while(c1[i]==c2[j])
                {
                    c3[k++]=c2[j++];
                    i++;
                }
                if(strlen(c3)>max)
                    p2=p1;
                i=memory;
            }
    }
    puts(p2);
}
