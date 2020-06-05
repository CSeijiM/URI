#include<stdio.h>

int main(){
    int N,i,X[1001],menor,pos;

    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&X[i]);
        if(X[i]<menor || i==0){
            menor = X[i];
            pos = i;
        }
    }
    printf("Menor valor: %d\n",menor);
    printf("Posicao: %d\n",pos);
    return 0;
}