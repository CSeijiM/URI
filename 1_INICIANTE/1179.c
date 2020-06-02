#include<stdio.h>

int main()
{
    int par[5],impar[5],
        valor,
        par_index=0,impar_index=0,
        i,j,k;

    for(i=0;i<15;i++){
        scanf("%d",&valor);
        // se valor impar
        if(valor%2!=0){
            //vetor cheio
            if(impar_index==4){
                for(j=0;j<5;j++){
                    printf("impar[%d] = %d\n",j,impar[j]);
                    impar_index=0;
                }
            }
            //enchendo vertor
            else{
                impar[impar_index] = valor;
                impar_index++;
                //printf("**%d\n",impar_index);
            }
        }
        //valor par
        else{
            //vetor cheio
            if(par_index==4){
                for(k=0;k<5;k++){
                    printf("par[%d] = %d\n",k,par[k]);
                    par_index=0;
                }
            }
            //enchendo vertor
            else{
                par[par_index] = valor;
                par_index++;
                //printf("**%d\n",par_index);
            }
            
        }
    }
    return 0;
}