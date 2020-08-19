#include <stdio.h>

int main(){
    int i,j,linha,coluna;

    while(scanf("%d %d",&linha,&coluna)!=EOF){
        int matriz[linha][coluna],matriz2[linha][coluna];

        for(i=0;i<linha;i++){
            for(j=0;j<coluna;j++){
                scanf("%d",&matriz[i][j]);
                matriz2[i][j]=matriz[i][j];
            }
        }
        for(i=0;i<linha;i++){
            for(j=0;j<coluna;j++){
                if(matriz[i][j]==0){
                    if(i>0){
                        matriz2[i][j]+=matriz[i-1][j];
                    }
                    if(i<linha-1){
                        matriz2[i][j]+=matriz[i+1][j];
                    }
                    if(j>0){
                        matriz2[i][j]+=matriz[i][j-1];
                    }
                    if(j<coluna-1){
                        matriz2[i][j]+=matriz[i][j+1];
                    }
                }
            }
        }
        for(i=0;i<linha;i++){
            for(j=0;j<coluna;j++){
                if(matriz[i][j]==1){
                    matriz2[i][j]=9;
                }
                printf("%d",matriz2[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}