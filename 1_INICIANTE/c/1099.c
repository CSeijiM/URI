#include<stdio.h>

int main(){
    int N,i,z,X,Y,aux,soma=0;

    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d%d",&X,&Y);
        if(X>Y){
            aux = X;
            X = Y;
            Y = aux;
        }
        if(Y-X<=1){
            soma=0;
            printf("%d\n",soma);
        }
        else{
            for(z=X+1;z<Y;z++){
                if(z%2!=0){
                    soma=soma+z;
                }
            }   
            printf("%d\n",soma);
            soma=0;
        }  
    }
    return 0;
}