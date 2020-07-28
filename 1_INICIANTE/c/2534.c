#include<stdio.h>

void ordenar(int *vetor, int tamanho){
    short i,j,aux;
    for(j=0;j<tamanho-1;j++){
        for(i=0;i<tamanho-1;i++){
            if(vetor[i] < vetor[i+1]){
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
            }
        }
    }    
}

int main(){
    int n,q,i,p;
    while(scanf("%d %d",&n,&q)!=EOF){
        int notas[n];
        for(i=0;i<n;i++){   
            scanf("%d",&notas[i]);
        }
        ordenar(notas,n);
        for(i=0;i<q;i++){
            scanf("%d",&p);
            printf("%d\n",notas[p-1]);
        }
    }
    return 0;
}