#include<stdio.h>

int main(){
    int X=1,soma,aux;

    while(1){
        scanf("%d",&X);
        if(X==0){
            break;
        }
        aux=5;
        soma=0;
        while(aux>0){
            if(X%2==0){
                soma+=X;
                aux--;
            }
            X++;
        }
        printf("%d\n",soma);
    }
    return 0;
}