#include<stdio.h>

int main(){
    int p,j1,j2,r,a;

    scanf("%d %d %d %d %d",&p,&j1,&j2,&r,&a);

    if(r==1){ //roubou
        if(a==1){ //acusou
            printf("Jogador 2 ganha!\n");
        }
        else printf("Jogador 1 ganha!\n"); //não acusou
    }
    else{
        if(a==1){
            printf("Jogador 1 ganha!\n");
        }
        else{
            if((j1+j2)%2==0){
                if(p==1){ //par
                    printf("Jogador 1 ganha!\n");
                }else{  //impar
                    printf("Jogador 2 ganha!\n");
                }
                }else{
                if(p==0){ //impar
                    printf("Jogador 1 ganha!\n");
                }else{  //par
                    printf("Jogador 2 ganha!\n");
                } 
            }
        } 
    }    

    return 0;
}