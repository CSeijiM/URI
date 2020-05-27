#include<stdio.h>

int main()
{
    int t,v,d;
    double litros;

    scanf("%d%d", &t,&v);
    d=t*v;
    litros = d/12.0;
    printf("%.3lf\n", litros);

    return(0);
}