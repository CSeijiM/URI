#include<stdio.h>

void main(){
    unsigned short cont=0;
    double distancia,soma=0;
    char nome[50];

    while(scanf(" %[^\n] %lf",nome,&distancia) != EOF){
        cont++;
        soma+=distancia;
        
    }
    printf("%.1lf\n",soma/cont);
}