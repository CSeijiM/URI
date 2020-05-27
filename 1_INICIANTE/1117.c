#include<stdio.h>

int main(){
    double n,soma=0,media,cont_n=0;

    while(1){
        scanf("%lf",&n);
        if(n>=0 && n<=10){
            cont_n++;
            soma=soma+n;
        }
        else printf("nota invalida\n");

        if(cont_n==2){
            media = soma/2;
            printf("media = %.2lf\n",media);
            break;
        }
    }
    return 0;
}