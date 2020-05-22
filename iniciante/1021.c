#include<stdio.h>

int main()
{
    double  money;
    int cem,cinq,vinte,dez,cinco,dois,
        um,meio,quarto,decimo,vigesimo,centesimo,
        notas, moedas;


    scanf("%lf", &money);

    notas = (int)money;
    moedas = (money - notas)*100;

    
    cem   = notas/100;
    notas = notas%100;
    cinq  = notas/50;
    notas = notas%50;
    vinte = notas/20;
    notas = notas%20;
    dez   = notas/10;
    notas = notas%10;
    cinco = notas/5;
    notas = notas%5;
    dois  = notas/2;
    notas = notas%2;
    um = notas/1;

    meio  = moedas/50;
    moedas = moedas%50;
    quarto = moedas/25;
    moedas = moedas%25;
    decimo = moedas/10;
    moedas = moedas%10;
    vigesimo = moedas/5;
    moedas = moedas%5;
    centesimo = moedas/1;
    moedas = moedas%1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cem);
    printf("%d nota(s) de R$ 50.00\n",  cinq);
    printf("%d nota(s) de R$ 20.00\n",  vinte);
    printf("%d nota(s) de R$ 10.00\n",  dez);
    printf("%d nota(s) de R$ 5.00\n",   cinco);
    printf("%d nota(s) de R$ 2.00\n",   dois);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", um);
    printf("%d moeda(s) de R$ 0.50\n", meio);
    printf("%d moeda(s) de R$ 0.25\n", quarto);
    printf("%d moeda(s) de R$ 0.10\n", decimo);
    printf("%d moeda(s) de R$ 0.05\n", vigesimo);
    printf("%d moeda(s) de R$ 0.01\n", centesimo);
    
    return(0);
}