#include<stdio.h>

int main(){
    int N,X,i,j,cont;

    scanf("%d",&N);
    for(i=0;i<N;i++){
        cont=2;
        scanf("%d",&X);

        for(j=2;j<X;j++){
            if(X%j==0){
                cont++;
            }
        }
        if(cont==2){
            printf("%d eh primo\n",X);
        }
        else printf("%d nao eh primo\n",X);
    }
    return 0;
}