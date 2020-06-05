#include<stdio.h>

int main()
{
    int notas[7]={100,50,20,10,5,2,1}, valor,cont[7];
    scanf("%d", &valor);
    printf("%d\n",valor);
    int j=0;
    
    while (j<7)
    {
        cont[j]=valor/notas[j];
        valor = valor%notas[j];
        printf("%d nota(s) de R$ %d,00\n", cont[j], notas[j]);
        j++;
    }
    return(0);
}