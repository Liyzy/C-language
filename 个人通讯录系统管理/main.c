#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct date
{
    char name[20];
    char phone[20];
    char QQ[20];
    struct date * next;
};
void  modify(struct date *h)
{
    char c;
    char mna[20];
    char nna[20];
    char nph[20];
    char nQQ[20];
    struct date *t;
    printf("please input the person's name you want to modify: ");
    scanf("%s",mna);
    getchar();
    t=h->next;
    while(t)
    {
        if(!strcmp(t->name,mna))
        {
            printf("please choose the information you want to modify:\nA.name\nB.phone\nC.QQ\n");
            scanf("%c",&c);
            getchar();
            switch(c)
            {
            case'A':
            {
                printf("please input the new name:");
                scanf("%s",nna);
                strcpy(t->name,nna);
                break;
            }
            case'B':
            {
                printf("please input the new phone:");
                scanf("%s",nph);
                strcpy(t->phone,nph);
                break;
            }
            case'C':
            {
                printf("please input the new QQ:");
                scanf("%s",nQQ);
                strcpy(t->QQ,nQQ);
                break;
            }
            }
            break;
        }
        else
            t=t->next;
    }
}
void  move(struct date *h)
{
    char dna[20];
    struct date *t,*pre;
    printf("please input the name you want to delete:");
    scanf("%s",dna);
    t=h->next;
    pre=h;
    while(t)
    {
        if(!strcmp(t->name,dna))
        {
            pre->next=t->next;
            free(t);
            t=pre->next;
        }
        else
        {
            pre=t;
            t=t->next;
        }
    }
}
void  add(struct date *h)
{
    struct date *t;
    char na[20];
    char ph[20];
    char Q[20];
    scanf("%s",na);
    scanf("%s",ph);
    scanf("%s",Q);
    while(*na!='#')
    {
        t=(struct date *)malloc(sizeof(struct date));
        strcpy(t->name,na);
        strcpy(t->phone,ph);
        strcpy(t->QQ,Q);
        t->next=h->next;
        h->next=t;
        scanf("%s",na);
        scanf("%s",ph);
        scanf("%s",Q);
    }
}
void  output(struct date *h)
{
    struct date *t;
    char c1[5]="name",c2[6]="phone",c3[3]="QQ";
    t=h->next;
    printf("%-15s%-15s%-15s\n",c1,c2,c3);
    while(t)
    {
        printf("%-15s%-15s%-15s\n",t->name,t->phone,t->QQ);
        t=t->next;
    }
}
void  search(struct date *h)
{
    char c;
    struct date *t;
    char tna[20];
    char tph[20];
    char tQQ[20];
    printf("Choose the method you want to use:\nA:name\nB:phone\nC:QQ\n");
    getchar();
    scanf("%c",&c);
    switch(c)
    {
    case'A':
    {
        printf("input the name:");
        scanf("%s",tna);
        t=h->next;
        while(t)
        {
            if (!strcmp(t->name,tna))
            {
                printf("%s %s %s",t->name,t->phone,t->QQ);
                break;
            }
            else
                t=t->next;
        }
        break;
    }
    case'B':
    {
        printf("input the phone:\n");
        scanf("%s",tph);
        t=h->next;
        while(t)
        {
            if (!strcmp(tph,t->phone))
            {
                printf("%s %s %s",t->name,t->phone,t->QQ);
                break;
            }
            else
                t=t->next;
        }
        break;
    }
    default:
    {
        printf("input the QQ:\n");
        scanf("%s",tQQ);
        t=h->next;
        while(t)
        {
            if (!strcmp(tQQ,t->QQ))
            {
                printf("%s %s %s",t->name,t->phone,t->QQ);
                break;
            }
            else
                t=t->next;
        }
        break;
    }
    }
}
int main()
{
    struct date *h,*t;
    char na[20];
    char ph[20];
    char Q[20];
    h=(struct date *)malloc(sizeof(struct date));
    h->next=0;
    scanf("%s",na);
    scanf("%s",ph);
    scanf("%s",Q);
    //(input)
    while(*na!='#')//When you input the '#',you stop inputing.
    {
        t=(struct date *)malloc(sizeof(struct date));
        strcpy(t->name,na);
        strcpy(t->phone,ph);
        strcpy(t->QQ,Q);
        t->next=h->next;
        h->next=t;
        scanf("%s",na);
        scanf("%s",ph);
        scanf("%s",Q);
    }
    //(output)
    output(h);
    //(search)
    search(h);
    //add a log
    printf("\nAdd logs:\n");
    add(h);
    output(h);
    //delete a log
    move(h);
    output(h);
    //modify a log
    modify(h);
    output(h);
    return 0;
}
