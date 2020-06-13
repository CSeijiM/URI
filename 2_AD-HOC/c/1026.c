#include<stdio.h>
#include<math.h>

int soma(unsigned int *bit1, unsigned int *bit2, unsigned int *resto){
    int resultado;

    // printf("%u %u\n",*bit1, *bit2);
    resultado = !*bit1 && *bit2 || *bit1 && !*bit2;

    *resto = *bit1 && *bit2;
    // printf("%d\n",resultado);
    return resultado;
}

void conversor(unsigned int valor, int *binario){
    int i=0;
    
    while(valor>0){
        binario[i]=valor%2;
        valor/=2;    
        i++;
    }

    // for(i-=1;i>=0;i--){
    //     printf("%d ", binario[i]);
    // }
    // printf("\n");
}

int main(){

    int soma(unsigned int *bit1, unsigned int *bit2, unsigned int *resto);
    void conversor(unsigned int valor, int *binario);

    unsigned int valor1, valor2 ,resto=0, resultado=0, vetor1[32], vetor2[32],i;
    
    while(scanf("%u %u",&valor1 ,&valor2)!=EOF){
        for(i=0;i<32;i++){
            vetor1[i]=0;
            vetor2[i]=0;
        }
        resultado=0;
        conversor(valor1, vetor1);
        conversor(valor2, vetor2);

        // for(i=0;i<32;i++){
        //     printf("%d ",vetor1[i]);
        // }
        // printf("\n");
        // for(i=0;i<32;i++){
        //     printf("%d ",vetor2[i]);
        // }
        // printf("\n");

        for(i=0;i<32;i++){
            if(soma(&vetor1[i], &vetor2[i], &resto)==1){
                resultado+=pow(2,i);
            }
        }

        printf("%u\n",resultado);
    }
    return 0;
}

