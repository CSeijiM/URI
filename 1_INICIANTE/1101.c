#include<stdio.h>

int main(){
    int M=1,N=1,aux,i,soma=0;

    while(1){
        scanf("%d%d", &M,&N);
        if(M<=0 || N<=0){
            break;
        }
        if(M>N){
            aux=M;
            M=N;
            N=aux;
        }
        for(i=M;i<=N;i++){
            soma = soma+i;
            printf("%d ",i);
        }
        printf("Sum=%d\n",soma);
        soma=0;
    }
    return 0;
}