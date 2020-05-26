#include<stdio.h>

int main(){
    int N,i,valores;

    scanf("%d",&N);

    for(i=0;i<N;i++){
        scanf("%d\n",&valores);
        if(valores > 0){
            if(valores%2==0){
                printf("EVEN POSITIVE\n");
            }
            else printf("ODD POSITIVE\n");
        }
        else if(valores < 0){
            if(valores%2==0){
                printf("EVEN NEGATIVE\n");
            }
            else printf("ODD NEGATIVE\n");
        }
        else printf("NULL\n");
    }
    return 0;
}