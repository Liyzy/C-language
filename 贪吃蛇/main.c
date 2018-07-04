#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
int head,tail;
int x1,y1;
int counter=0;
int changemodle(char qipan[22][32],int zuobiao[2][30],char direction)
{
    int x,y;
    if(direction==72)
    {
        x=zuobiao[0][head]-1;
        y=zuobiao[1][head];
    }
    if(direction==80)
    {
        x=zuobiao[0][head]+1;
        y=zuobiao[1][head];
    }
    if(direction==77)
    {
        x=zuobiao[0][head];
        y=zuobiao[1][head]+1;
    }
    if(direction==75)
    {
        x=zuobiao[0][head];
        y=zuobiao[1][head]-1;
    }
    if(x==0||x==21||y==0||y==31)
        return 0;
    if(qipan[x][y]!=' '&&qipan[x][y]!='@')
        return 0;
    if(x==x1&&y==y1)
        {
            qipan[zuobiao[0][head]][zuobiao[1][head]]='*';
            head=(head+1)%30;
            zuobiao[0][head]=x1;
            zuobiao[1][head]=y1;
            qipan[zuobiao[0][head]][zuobiao[1][head]]='#';
            srand(time(0));
            qipan[x1=rand()%20+1][y1=rand()%30+1]='@';
            counter++;
            return 1;
        }
    else
   {

    qipan[zuobiao[0][tail]][zuobiao[1][tail]]=' ';
    tail=(tail+1)%30;
    qipan[zuobiao[0][head]][zuobiao[1][head]]='*';
    head=(head+1)%30;
    zuobiao[0][head]=x;
    zuobiao[1][head]=y;
    qipan[zuobiao[0][head]][zuobiao[1][head]]='#';
    return 1;}
}
int main()
{
    char c;
    long start;
    int gamespeed;
    int zuobiao[2][30];
    char qipan[22][32];
    int i,j;
    int direction=77;
    int timeover;
    printf("Please choose the difficulty of game:\nA.Easy.\nB.Difficult.\nC.Very difficult.\n");
    scanf("%c",&c);
    switch(c)
    {
        case'A':gamespeed=500;break;
        case'B':gamespeed=300;break;
        case'C':gamespeed=200;break;
    }
    system("cls");
    /*初始化蛇的坐标*/
    for(i=0; i<=3; i++)
    {
        zuobiao[0][i]=1;
        zuobiao[1][i]=i+1;
    }
    head=3;
    tail=0;
    /*棋盘构建*/
    for(i=0; i<32; i++)
    {
        qipan[0][i]= '-';
        qipan[21][i]= '-';
    }
    for(i=1; i<21; i++)
    {
        qipan[i][0]= '|';
        qipan[i][31]= '|';
    }
    for(i=1; i<21; i++)
        for(j=1; j<31; j++)
            qipan[i][j]= ' ';
    for(i=1; i<=3; i++)
        qipan[1][i]='*';
    qipan[1][4]='#';
    srand(time(0));
       qipan[x1=rand()%20+1][y1=rand()%30+1]='@';
    while(direction!='Z')
    {
       system("cls");
     for(i=0; i<22; i++)
    {
        for(j=0; j<32; j++)
            printf("%c",qipan[i][j]);
        printf("\n");
    }
        timeover=1;
            start=clock();
    while(!kbhit()&&(timeover=clock()-start<=gamespeed));
        if(timeover)
        {
            getch();
            direction=getch();
        }
        else
            direction=direction;
        if(!(direction==72||direction==80||direction==75||direction==77))
            return 0;
        if(!changemodle(qipan,zuobiao,direction))
            direction='Z';
        printf("Score:%d",counter);
    }
    return 0;
}
