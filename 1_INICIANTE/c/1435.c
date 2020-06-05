#include<stdio.h>

int main(){
    int i,j,k,N,M[100][100],inicio,fim,elemento;

    while(1){
        scanf("%d",&N);
        if(N==0){
            break;
        }
        fim=N;
        inicio=0;
        elemento=1;
        while(1){
            for(i=inicio;i<fim;i++){
                for(j=inicio;j<fim;j++){
                    M[i][j]=elemento;   
                }
            }
            inicio++;
            fim--;
            elemento++;
            if(fim==0){
                break;
            }
        }

        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                if(j==0){
                    printf("%3hd",M[i][j]); 
                }
                else printf(" %3hd",M[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    

    return 0;
}