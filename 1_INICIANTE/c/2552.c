#include <stdio.h>

void leitura(int **matriz,int num_linha,int num_col){
    int i,j;
    for(i=0;i<num_linha;i++){
        for(j=0;j<num_col;j++){
            scanf("%d ",matriz[i][j]);
        }
    }
}

int main(){
    int linha,coluna;

    while(scanf("%d %d",&linha,&coluna)!=EOF){
        int matriz[linha][coluna];
        
    }
    return 0;
}