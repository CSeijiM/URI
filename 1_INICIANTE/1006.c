#include<stdio.h>

double A,B,C,MEDIA;

int main()
{
    scanf("%lf%lf%lf",&A,&B,&C);
    MEDIA = ((A*2)+(B*3)+(C*5))/10;
    printf("MEDIA = %.1lf\n", MEDIA);
    return(0);
}