#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int rd,guess,i;
    printf("======\\����һ��������Ϸ//======\n");
    srand(time(0));
    rd=rand()%100+1;
    for(i=1; i<10; i++)
    {
        printf("������²�ֵ:\n");
        scanf("%d",&guess);
        if(guess<rd)printf("��С�ˡ�\n");
        if(guess>rd)printf("�´��ˡ�\n");
        if(guess==rd)
        {
            printf("��¶��ˣ�\n");
            break;
        }
    }
    switch(i)
    {
    case 1:
        printf("��Ҳ����������\n");
        break;
    case 2:
    case 3:
        printf("������ţ�\n");
        break;
    case 4:
    case 5:
        printf("������Ŷ~~\n");
        break;
    case 6:
    case 7:
        printf("�е㱿�ˡ�����\n");
        break;
    default:
        printf("��������\n");
        break;
    }
    return 0;
}
