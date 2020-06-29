#include<stdio.h>

int main(){
    int n;
    double soma=0, resultado=0;

    scanf("%d",&n);
    while(n>0){
        soma+=2;
        resultado=1/soma;
        soma = resultado;
        n--;
    }
    resultado+=1;
    printf("%.10lf\n",resultado);
    return 0;
}