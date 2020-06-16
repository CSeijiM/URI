#include<stdio.h>

int main(){
    int P,N,i,altura[101],dif;

    scanf("%d %d", &P,&N);
    for(i=0;i<N;i++){
        scanf("%d",&altura[i]);
    }
    // for(i=0;i<N;i++){
    //     printf("%d",altura[i]);
    // }

    for(i=0;i<N-1;i++){
        dif=altura[i+1]-altura[i];
        if(dif<0){
            dif*=-1;
        }
        if(dif>P){
            printf("GAME OVER\n");
            break;
        }
        else if(i==N-2){
            printf("YOU WIN\n");
        }
    } 
    return 0;
}