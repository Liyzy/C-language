#include<stdio.h>
void TWO(int num)
{
    if(num>1)TWO(num/2);
    printf("%d",num%2);
}
void EIGHT(int num)
{
    if(num>8)
    {
        EIGHT(num/8);
        printf("%d",num%8);
    }
    else
        printf("%d",num);
}
void ox(int num)
{
    char a[16]= {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    if(num>=16)
    {
        ox(num/16);
        printf("%c",a[num%16]);
    }
    else
        printf("%c",a[num%16]);
}

int main()
{
    int num;
    char c;
    printf("��ѡ������Ҫ�Ľ���ת������:\nA.ʮ����ת������\nB.ʮ����ת�˽���\nC.ʮ����תʮ������\n");
    scanf("%c",&c);
    printf("������һ��ʮ������:\n");
    scanf("%d",&num);
    switch(c)
    {
    case'A':
        TWO(num);
        break;
    case'B':
        EIGHT(num);
        break;
    case'C':
    {
        printf("oX");
        ox(num);
    }
    break;
    case'D':
    {

    }
    }
}
