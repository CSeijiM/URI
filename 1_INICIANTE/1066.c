#include<stdio.h>

int main(){
    int i,valores,par=0,impar=0,posi=0,neg=0;

    for(i=0;i<5;i++){
        scanf("%d",&valores);
        if(valores%2==0){
            par++;
        }
        else impar ++;

        if(valores>0){
            posi++;
        }
        else if(valores<0) neg++;
    }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", posi);
    printf("%d valor(es) negativo(s)\n", neg);
    return 0;
}