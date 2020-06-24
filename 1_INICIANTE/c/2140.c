#include<stdio.h>
#include<stdbool.h>

int main(){
    int i,j,N,M,notas[6]={2,5,10,20,50,100},troco;
    bool possivel;

    while(1){
        scanf("%d %d",&N,&M);
        if(N==0&&M==0){
            break;
        }
        possivel=false;
        troco=M-N;

        for(i=5;i>=0;i--){
            for(j=5;j>=0;j--){
                if(notas[i]+notas[j]==troco){
                    possivel=true;       
                }
            }    
        }
        if(possivel==true){
            printf("possible\n");
        }
        else printf("impossible\n");
    }
    return 0;
}