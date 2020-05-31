#include<stdio.h>

int main(){
    int N,X,i,j,soma;

    scanf("%d",&N);
    for(i=0;i<N;i++){
        soma=0;
        scanf("%d",&X);
        for(j=1;j<X;j++){
            if(X%j==0){
                soma+=j;
            }
        }
        if(soma == X){
            printf("%d eh perfeito\n",X);
        }else printf("%d nao eh perfeito\n",X);
    }
    return 0;
}