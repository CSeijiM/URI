#include<stdio.h>

int main(){
    int X,Z,soma=0,cont=0;

    scanf("%d%d",&X,&Z);
    while(Z<=X){
        scanf("%d",&Z);
    }
    while(soma<=Z){
        cont++;
        soma+=X;
        X++;
    }
    printf("%d\n",cont);

    return 0;
}