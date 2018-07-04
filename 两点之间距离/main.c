#include <stdio.h>
#include <stdlib.h>
#include<math.h>

float distance(float x1,float y1,float x2,float y2)
{
    float distance;
    distance=fabs((x2-x1)*(x2-x1)+(y1-y2)*(y1-y2));
    printf("%f",distance);

    return distance;
}

int main()
{
    float x1,x2,y1,y2;
    printf("«Î ‰»Î¡Ωµ„:\n");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);

    float distance(float x1,float y1,float x2,float y2);
    distance(x1,y1,x2,y2);


    return 0;
}
