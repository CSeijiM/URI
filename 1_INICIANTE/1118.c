#include<stdio.h>

int main(){

    int cont_n=0,op=0;
    double media,soma=0,n;

    while(1){
        scanf("%lf",&n);
        if(n>=0 && n<=10){
            cont_n++;
            soma=n+soma;
        }
        else printf("nota invalida\n");
        if(cont_n==2){
            media=soma/2;
            cont_n=0;
            soma=0;
            printf("media = %.2lf\n",media);
            while(1){
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d",&op);
                if(op==2 || op==1){
                    break;
                }
            }
        }        
        if(op==2){
            break;
        }
    }
    return 0;
}