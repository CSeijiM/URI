#include<stdio.h>

int main(){
    int L,i,j;
    float M[12][12],resultado=0;
    char op; // <--- O maior problema desse código é esta varivel ela DEVE ser lida como caracter "%c".

    scanf("%d %c",&L,&op); // <<-- dessa forma se não for dessa forma vc vai erra.
    for(i=0;i<=11;i++){ //linha
        for(j=0;j<=11;j++){ //coluna
            scanf("%f",&M[i][j]);
            if(i==L){
                resultado+=M[i][j];
            }                        
        }
    }

    if(op=='S'){ //soma
        printf("%.1f\n",resultado);
    }
    else if(op=='M'){ //media
        printf("%.1f\n",resultado/12.0);
    }
    return 0;
}