#include<stdio.h>

int main(){
    int i,teste[4],fim=0,aux=0,lado;
    while(1){
        for(i=0;i<4;i++){
            scanf("%d",&teste[i]);
            if(teste[i]==0){
                fim++;
            }
        }
        if(fim==4){
            break;
        }
        else fim=0;
        if(teste[0]>teste[1]){
            aux=teste[0];
            teste[0]=teste[1];
            teste[1]=aux;
        }
        if(teste[2]>teste[3]){
            aux=teste[2];
            teste[2]=teste[3];
            teste[3]=aux;
        }
        if(teste[0]>teste[3]{
            printf("N\n");
        })

        lado = 2*teste[2]+2*teste[3];
    
        if(lado<=teste[1] && teste[0]>=teste[3]*2){
            printf("S\n");
        }
        else printf("N\n");
    }
    return 0;
}