#include<stdio.h>

int main(){
    int n,i,j,tamanho,sapato_e[61],sapato_d[61];
    char lado;
    while(scanf("%d",&n)!=EOF){ 
        int total=0,numpar=0;
        for(i=30;i<61;i++){
            sapato_e[i]=0;
            sapato_d[i]=0;
        }
        for(i=0;i<n;i++){
            scanf("%d %c", &tamanho, &lado);
            if(lado=='E'){
                sapato_e[tamanho]++;
            }
            else if(lado=='D'){
                sapato_d[tamanho]++;
            }
        }
        for(i=30;i<61;i++){
            numpar=sapato_d[i]-sapato_e[i];
            if(sapato_d[i]!=0 && sapato_e[i]!=0){
                if(numpar<0){
                    total+=sapato_d[i];
                }
                else{
                    total+=sapato_e[i];
                }
            }
        }
        // printf("Lado E\n");
        // for(i=30;i<61;i++){
        //     printf("%d ",sapato_e[i]);
        // }
        // printf("\n");
        // printf("Lado D\n");
        // for(i=30;i<61;i++){
        //     printf("%d ",sapato_d[i]);
        // }
        // printf("\n");

        printf("%d\n",total);
    }
    
    return 0;
}