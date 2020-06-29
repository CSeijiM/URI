#include<stdio.h>

double mfpc(int n){
    double resultado=0,soma=0;
    while(1){
        if(n==0){
            resultado+=3;
            return resultado;
        }
        soma+=6;
        resultado = 1 / soma;
        soma = resultado;
        n--;
    }
}

int main(){
    int n;
    double resultado=0;
    double mfpc(int n);

    scanf("%d",&n);
    resultado = mfpc(n);
    printf("%.10lf\n",resultado);
    return 0;
}