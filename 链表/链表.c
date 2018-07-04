#include<stdio.h>
#include<math.h>
struct student
{
    int number;
    float score;
    struct student *next;
};
int main()
{
    struct student *h,*t;
    int tn;
    float ts;
    scanf("%d%f",&tn,&ts);
    h=(struct student *)malloc(sizeof(struct student));
    h->next=0;
    while(tn!=0)
    {
        t=(struct student *)malloc(sizeof(struct student));
        t->number=tn;
        t->score=ts;
        t->next=h->next;
        h->next=t;
        scanf("%d%f",&tn,&ts);
    }
    t=h->next;
    while(t)
    {
        printf("%d  %f\n",t->number,t->score);
        t=t->next;
    }
    t=h->next;
    while(t)
    {
        if(fabs(t->score-3.6)<1e-6)
            printf("%d\t",t->number);
        t=t->next;
    }

}
