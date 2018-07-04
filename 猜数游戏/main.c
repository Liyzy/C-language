#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int rd,guess,i;
    printf("======\\这是一个猜数游戏//======\n");
    srand(time(0));
    rd=rand()%100+1;
    for(i=1; i<10; i++)
    {
        printf("请输入猜测值:\n");
        scanf("%d",&guess);
        if(guess<rd)printf("猜小了。\n");
        if(guess>rd)printf("猜大了。\n");
        if(guess==rd)
        {
            printf("你猜对了！\n");
            break;
        }
    }
    switch(i)
    {
    case 1:
        printf("神也不能这样！\n");
        break;
    case 2:
    case 3:
        printf("真是天才！\n");
        break;
    case 4:
    case 5:
        printf("还不错哦~~\n");
        break;
    case 6:
    case 7:
        printf("有点笨了。。。\n");
        break;
    default:
        printf("你是猪吗？\n");
        break;
    }
    return 0;
}
