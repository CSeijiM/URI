#include<stdio.h>

int main(){

    int X,cont=6,i,valor;
    scanf("%d",&X);

    valor = X;
    while(cont!=0){
        valor=valor+1;
        if(valor%2!=0){
            cont--;
            printf("%d\n",valor);
        }
    }
    return 0;
}