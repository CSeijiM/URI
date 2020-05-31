#include<stdio.h>

int main(){
    int idade;
    double soma=0,cont=0,media;

    while(1){
        scanf("%d",&idade);
        if(idade>=0){
            cont++;
            soma+=idade;
        }
        else break;
    }

    media = soma/cont;
    printf("%.2lf\n",media);
    return 0;
}