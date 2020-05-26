#include<stdio.h>

int main(){
    double media,valores,soma;
    int i,cont=0;

    for(i=0;i<6;i++){
        scanf("%lf", &valores);
        if(valores>0){
            cont++;
            soma = soma + valores;
        }
    }
    media = soma/cont;
    printf("%d valores positivos\n",cont);
    printf("%.1lf\n", media);
    return 0;
}