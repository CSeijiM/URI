#include<stdio.h>

int main(){
    int i, n,numero,vetor[2001] = {};

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&numero);
        vetor[numero]++;
    }
    for(i=0;i<2001;i++){
        if(vetor[i]!=0){
            printf("%d aparece %d vez(es)\n",i,vetor[i]);
        }
    }
    return 0;
}