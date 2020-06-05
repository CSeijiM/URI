#include<stdio.h>

int main(){
    int N,X,Y,i,soma,aux;

    scanf("%d",&N);
    for(i=0;i<N;i++){
        soma=0;
        aux=0;
        scanf("%d%d",&X,&Y);
        while(aux<Y){
            if(X%2!=0){
                soma+=X;
                aux++;
            }
            X++;
        }
        printf("%d\n",soma);
   
    }
    return 0;
}