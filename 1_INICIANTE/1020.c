#include<stdio.h>

int main()
{
    int dias, ano, mes, dia;
    scanf("%d", &dias);
    
    ano = dias/365;
    dias = dias%365;
    mes = dias/30;
    dias = dias%30;
    dia = dias;
    
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);
    return(0);
}