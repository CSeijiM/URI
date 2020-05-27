#include<stdio.h>

int X;
double Y,consumo;

int main()
{   
    scanf("%d%lf", &X,&Y);
    consumo = X/Y;
    printf("%.3lf km/l\n",consumo);
    return(0);
}