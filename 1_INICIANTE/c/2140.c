#include<stdio.h>

int main(){
    int i,N,M,notas[6]={2,5,10,20,50,100},troco,possivel;

    while(1){
        possivel=0;
        scanf("%d %d",&N,&M);
        if(N==0&&M==0){
            break;
        }
        troco=M-N;
        for(i=5;i>=0;i--){
            if(troco/2==notas[i]){
                possivel=2;
                printf("%d ",possivel);
            }
        }
        if(possivel<2){
            for(i=5;i>=0;i--){
                if(notas[i]<=troco){
                    troco-=notas[i];
                    possivel++;
                    printf("%d %d",possivel,troco);
                }
            }   
        }
        if(possivel==2){
            printf("possible\n");
        }
        else printf("impossible\n");
    }

        
    return 0;
}