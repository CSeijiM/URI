#include<stdio.h>

int main(){
    double valores[6];
    int i,cont=0;
    for(i=0;i<6;i++){
        scanf("%lf", &valores[i]);
        if(valores[i]>0){
            cont++;
        }
    }
    printf("%d valores positivos\n", cont);
    return(0);
}