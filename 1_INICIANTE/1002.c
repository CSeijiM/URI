#include<stdio.h>

double area,n = 3.14159,raio;

int main()
{
    scanf("%lf",&raio);
    area = n*raio*raio;
    printf("A=%.4lf\n", area);
    return(0);
}