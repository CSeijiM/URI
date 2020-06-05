#include<stdio.h>

char nome;
double fixo,vendas,salario;

int main()
{   
    scanf("%s", &nome);
    scanf("%lf%lf", &fixo, &vendas);
    salario = fixo+(vendas*0.15);
    printf("TOTAL = R$ %.2lf\n", salario);
    return(0);
}