#include<stdio.h>

int main()
{
    int par[5],impar[5],
        valor,
        par_index=0,impar_index=0,
        i,j,k;

    for(i=0;i<15;i++){

        if(impar_index==5){ //vetor cheio
            for(j=0;j<5;j++){
                printf("impar[%d] = %d\n",j,impar[j]);
                impar_index=0;
            }
        }
        if(par_index==5){ //vetor cheio
            for(j=0;j<5;j++){
                printf("par[%d] = %d\n",j,par[j]);
                par_index=0;
            }
        }
        scanf("%d",&valor);
        
        if(valor%2!=0){ // se valor impar
            impar[impar_index] = valor;
            impar_index++;
        }
        else{ // se valor impar
            par[par_index] = valor;
            par_index++;
        }
    }
    for(j=0;j<impar_index;j++){
        printf("impar[%d] = %d\n",j,impar[j]);
    }

    for(j=0;j<par_index;j++){
        printf("par[%d] = %d\n",j,par[j]);
    }
    return 0;
}