#include<stdio.h>
#include<math.h>

int main(){
    int i,teste[7];
    double distancia;

    while(1){
        for(i=0;i<6;i++){
            if(scanf("%d",&teste[i])==EOF){
                break;
            }
        }
        if(i<5){
            break;
        }
        distancia = sqrt(pow((teste[4]-teste[1]),2)+pow((teste[5]-teste[2]),2))+teste[3];
        if(distancia<=teste[0]){
            printf("RICO\n");
        }
        else printf("MORTO\n");
    }
    return 0;
}