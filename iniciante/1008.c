#include<stdio.h>

int N,H;
double Sh, SALARY;

int main()
{
    scanf("%d%d%lf", &N,&H,&Sh);
    SALARY = H*Sh;
    printf("NUMBER = %d\n",N);
    printf("SALARY = U$ %.2lf\n", SALARY);
    return(0);
}