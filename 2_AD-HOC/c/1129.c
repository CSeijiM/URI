#include<stdio.h>

int main(){
    int n, alternativa[5],i,j,escolhido,qt_escolhidos;

    while(1){
        scanf("%d",&n);
        if(n==0){
            break;
        }
        for(i=0;i<n;i++){
            qt_escolhidos=0;
            escolhido=0;
            for(j=0;j<5;j++){
                scanf("%d",&alternativa[j]);
                if(alternativa[j]<=127){
                    qt_escolhidos++;
                    escolhido=j;
                }
            }
            if(qt_escolhidos==1){
                printf("%c\n",escolhido+65);
            }
            else printf("*\n");
        }
    }
    return 0;
}