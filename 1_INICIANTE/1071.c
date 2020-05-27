#include<stdio.h>

int main(){
    int X,Y,soma=0,i,aux;

    scanf("%d%d",&X,&Y);
    if(Y<X){
        aux = X;
        X = Y;
        Y = aux;
    }
    for(i=X+1;i<Y;i++){
        if(i%2!=0){
            soma = soma + i;
        }
    }
    printf("%d\n",soma);
    return 0;
}